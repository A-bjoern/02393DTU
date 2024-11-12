//
// Created by asbpo on 05-11-2024.
//
#include <iostream>
#include <vector>

using namespace std;

void Fibonacci(int n, int f1=1, int f2=0, int counter=0){
    int f3 = f1+f2;
    if(n <= 1){
        cout << f3;
        return;
    }
    if(counter == n){
        cout << f3;
        return;
    }
    Fibonacci(n,f2,f3,counter+1);
}


int main(){
    int n;
    while(true) {
        std::cin >> n;
        if (std::cin.fail()) break;
        Fibonacci(n);
        cout << " ";
    }
    cout << endl;
    return 0;
}