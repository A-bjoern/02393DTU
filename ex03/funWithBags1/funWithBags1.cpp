//
// Created by asbpo on 10-09-2024.
//

#include <iostream>
#include <set>



struct bag {
    std::multiset<int> nums;
    void add(int a) {
        nums.insert(a);
    }
    void del(int a) {
        auto i = nums.find(a);
        if(i != nums.end()){
            nums.erase(i);
        }
    }
    void qry(int a){
        if(nums.find(a) != nums.end()){
            std::cout << "T";
            return;
        }
        std::cout << "F";
    }
};



int main() {
    bag bag;
    std::string txt;
    int n;
    while(true){
        std::cin >> txt >> n;
        if(txt == "quit" || txt == "Quit") return 0;
        if(txt == "add") bag.add(n);
        else if(txt == "del") bag.del(n);
        else if(txt == "qry") bag.qry(n);
    }
    return 0;
}