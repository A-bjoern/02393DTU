//
// Created by asbpo on 12-11-2024.
//

#include <iostream>
#include <vector>

using namespace std;

void Palindrome(vector<int>& n, int right, int left=0){
    if(left>=right){
        cout << "yes" << endl;
        return;
    }
    if(n[left] != n[right]){
        cout << "no" << endl;
        return;
    }
    Palindrome(n,right-1,left+1);

}

int main(){
    int n;
    vector<int> v;
    while(true) {
        std::cin >> n;
        if (std::cin.fail()) break;
        v.push_back(n);
    }

    Palindrome(v,v.size()-1);
    return 0;
}