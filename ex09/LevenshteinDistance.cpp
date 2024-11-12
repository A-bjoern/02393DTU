//
// Created by asbpo on 12-11-2024.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Levenshtein(string str1, string str2, int m, int n){
    if (m == 0) {
        return m;
    }
    if (n == 0) {
        return m;
    }

    if (str1[m - 1] == str2[n - 1]) {
        return Levenshtein(str1, str2, m - 1,n - 1);
    }

    return 1 + min(Levenshtein(str1, str2, m, n - 1),min(Levenshtein(str1, str2, m - 1,n),Levenshtein(str1, str2, m - 1,n - 1)));
}

int main(){
    string s = "AB B";
    /*
    while(true) {
        std::cin >> s;
        if (std::cin.fail()) break;
    }
     */
    string a = s.substr(0,s.find(' '));
    string b = s.substr(a.size()+1,s.size());
    cout << Levenshtein(a,b,a.length(),b.length());
    return 0;
}