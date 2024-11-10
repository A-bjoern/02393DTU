//

// Created by asbpo on 05-11-2024.

//


#include <iostream>
#include <vector>

using namespace std;

//Didn't read the task description properly. Need to do this with recursion, so going to do that now.

string reverse(vector<string>&v, int index = 0) {

    if (index == v.size()) {

        return "";

    }

    return reverse(v, index + 1) + v[index];

}


int main(){

    string s = "10 9 8 7 6 5 4 3 2 1";
    vector<string> v;
    /*
    while(true) {

        std::cin >> s;

        if (std::cin.fail()) break;

    }
     */
    v.push_back(s);
    reverse(v);

    for(int i = 0; i< v.size(); i++){
        cout << v.at(i);
    }

}
