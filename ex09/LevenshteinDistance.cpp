//
// Created by asbpo on 12-11-2024.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int Levenshtein(string& a, string& b, int m, int n){
    if (m == 0) {
        return n;
    }
    if (n == 0) {
        return m;
    }

    if (a[m - 1] == b[n - 1]) {
        return Levenshtein(a, b, m - 1,n - 1);
    }

    return 1 + min(Levenshtein(a, b, m, n - 1),min(Levenshtein(a, b, m - 1,n),Levenshtein(a,b, m - 1,n - 1)));
}

int main(){
    string s = "";
    getline(std::cin,s);
    string a = s.substr(0,s.find(' '));
    string b = s.substr(a.size()+1,s.size());
    cout << Levenshtein(a,b,a.length(),b.length());
    return 0;
}