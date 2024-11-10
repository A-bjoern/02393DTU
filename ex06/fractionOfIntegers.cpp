//
// Created by asbpo on 08-10-2024.
//
#include <iostream>


class fraction {
private:
// Internal representation of a fraction as two integers
    int numerator;
    int denominator;
public:
// Class constructor
    fraction(int n, int d){
        numerator = n;
        denominator = d;
    };
// Methods to update the fraction
    void add(fraction f){
        int a,b;
        a = numerator;
        b = denominator;
        numerator = numerator * f.denominator;
        denominator = denominator * f.denominator;
        f.numerator = b*f.numerator;
        f.denominator = a*f.denominator;
        numerator += f.numerator;
    };
    void mult(fraction f){
        numerator *= f.numerator;
        denominator *= f.denominator;
    };
    void div(fraction f){
        numerator *=f.denominator;
        denominator *= f.numerator;
    };
// Display method
    void display(void){
        while((numerator%2 == 0 && denominator%2 == 0)){
            numerator /= 2;
            denominator /= 2;
        }
        std::cout << numerator << " " << "/" << " " <<  denominator << std::endl;
    };
};

int main() {
    int a,b,c,d;
    std::string line,op;
    while(true){
        std::cin >> a >> line >> b >> op >> c >> line >> d;
        if(std::cin.fail()) break;
        fraction f1(a,b);
        if(op == "+"){
            f1.add(fraction(c,d));
        }else if(op == "*"){
            f1.mult(fraction(c,d));
        }else if(op == "div"){
            f1.div(fraction(c,d));
        }
        f1.display();
    }
    return 0;
}