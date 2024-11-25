//
// Created by asbpo on 25-11-2024.
//

#ifndef SHAPESPROJECT_FIBONACCITREE_H
#define SHAPESPROJECT_FIBONACCITREE_H
#include <vector>
using namespace std;
struct Node {
    int val;        // Contains the value
    Node *left;    // Pointer to the next element in the list
    Node *right;    // Pointer to the previous element in the list
    Node(int val);
};

class Tree{
public:
    Tree();
    void insert(int val);
    void display();
    int size();
    int depth();
    int leaves();
private:
    Node *root;
    Node *insertRecursive(Node* node, int val);
    void preOrderTraversal(Node* node, vector<int>& v);
    int sizeRecursive(Node* node);
    int depthRecursive(Node* node);
    int leavesRecursive(Node* node);
};
#endif //SHAPESPROJECT_FIBONACCITREE_H
