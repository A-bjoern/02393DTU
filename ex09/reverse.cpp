//

// Created by asbpo on 05-11-2024.

//


#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& s) {
    if(s.empty()){
        cout << endl;
        return;
    }
    cout << s.back() << " ";
    s.pop_back();
    reverse(s);
}


int main(){
//    vector<int> v{10,9,8,7,6,5,4,3,2,1};
    vector<int> v;
    int n;
    while(true) {

        std::cin >> n;
        if (std::cin.fail()) break;
        v.push_back(n);
    }
    reverse(v);
    return 0;
}
