//
// Created by asbpo on 12-11-2024.
//

#include <iostream>
#include <vector>

using namespace std;

bool Palindrome(vector<int>& n, int right, int left=0){
    if(n.size() <= 1){
        return true;
    }
    if(n[left] != n[right]){
        return false;
    }
    return Palindrome(n,right-1,left+1);
}

int main(){
    int n;
    vector<int> v;
    while(true) {
        std::cin >> n;
        if (std::cin.fail()) break;
        v.push_back(n);
    }
    if(Palindrome(v,v.size()-1)){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    };
    return 0;
}