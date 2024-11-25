//
// Created by asbpo on 25-11-2024.
//

#include <iostream>
#include <vector>
//I find it annoying we have to use it in the .cpp file when we've already learned about .h and the contract we can
//impose from there.
//#include <FibonacciTree.h>;
using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int val) : val(val), left(nullptr), right(nullptr) {}
};

class Tree {
public:
    Tree();
    void insert(int val);
    void display();
    int size();
    int depth();
    int leaves();
private:
    Node *root;
    Node* insertRecursive(int val);
    void preOrderTraversal(Node* node, vector<int>& v);
    int sizeRecursive(Node* node);
    int depthRecursive(Node* node);
    int leavesRecursive(Node* node);
};

Tree::Tree() : root(nullptr){}

void Tree::preOrderTraversal(Node* node, vector<int>& v) {
    if (node == nullptr) {
        return;
    }
    std::cout << node->val << " ";
    v.push_back(node->val);
    preOrderTraversal(node->left, v);
    preOrderTraversal(node->right, v);
}
void Tree::display() {
    vector<int> v;
    preOrderTraversal(root,v);
    cout << endl;
}
int Tree::sizeRecursive(Node *node) {
    if(node == nullptr){
        return 0;
    }
    return 1+ sizeRecursive(node->left) + sizeRecursive(node->right);
}
int Tree::depthRecursive(Node *node) {
    if(node == nullptr){
        return 0;
    }
    return max(1+depthRecursive(node->right),1+ depthRecursive(node->left));
}
int Tree::leavesRecursive(Node *node) {
    if(node == nullptr){
        return 0;
    }
    if(node ->left == nullptr && node->right == nullptr){
        return 1;
    }
    return leavesRecursive(node->left) + leavesRecursive(node->right);
}
int Tree::size() {
    return sizeRecursive(root);
}

int Tree::depth() {
    return depthRecursive(root);
}
int Tree::leaves(){
    return leavesRecursive(root);
}
int Fibonacci(int n){
    if(n <= 1){
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}
void Tree::insert(int n) {
    root = insertRecursive(n);
}

Node* Tree::insertRecursive(int n) {
    if (n <= 1) {
        return new Node(1);
    }
    Node* node = new Node(Fibonacci(n));
    node->left = insertRecursive(n - 1);
    node->right = insertRecursive(n - 2);
    return node;
}

int main(){
    int n = 6;
    Tree tree;
    while(true) {
        std::cin >> n;
        if (std::cin.fail()) break;
        tree.insert(n);
    }
    cout << "Call tree in pre-order: "; tree.display();
    cout << "Call tree size: " << tree.size() << endl;
    cout << "Call tree depth: " <<  tree.depth() << endl;
    //Note to teacher: Leaves in plural is leaves. Not leafs.
    cout << "Call tree leafs: " << tree.leaves() << endl;
    return 0;
}