//
// Created by asbpo on 10-09-2024.
//
#include <iostream>
#include <set>

struct page {
    int page_num;
    std::string f_name;
    std::string m_name;
    std::string l_name;
    std::string phone;
    std::string s_addr;
    std::string h_num;
    int zip_code;
    std::string region;
       bool operator<(const page& other) const{
        return page_num < other.page_num;
    };
};

struct address_book {
    std::set<page> book;
    void add_page(
            int page_num,
            std::string& f_name,
            std::string& m_name,
            std::string& l_name,
            std::string& phone,
            std::string& s_addr,
            std::string& h_num,
            int zip_code,
            std::string region
                )
                {
            page tmp = page{page_num,f_name,m_name,l_name,phone,s_addr,h_num,zip_code,region};
            if(book.size() >= 50){
                return;
            }
            if(page_num > 50 || page_num < 0) return;
            book.insert(tmp);
            return;
    };
    void clr(int page_num){
        page tmp = page{page_num,"","","","","","",0,""};
        auto i = book.find(tmp);
        if(i != book.end()) book.erase(i);
    }
    void qry(int page_num){
        page tmp = page{page_num,"","","","","","",0,""};
        auto i = book.find(tmp);
        if(i != book.end()){
            std::cout << i->f_name + "," + i->m_name + "," + i->l_name + "," + i->phone + "," +  i->s_addr + "," + i->h_num + "," <<  i-> zip_code <<"," + i->region << std::endl;
        }
    }
};


/*int main() {
    address_book a_book;
    std::string txt;
    int p;
    std::string firstName;
    std::string middleName;
    std::string lastName;
    std::string phoneNumber;
    std::string streetAddress;
    std::string houseNumber;
    int zipCode;
    std::string region;
    while(true){
        std::cin >> txt >> p;
        if(txt == "quit" || txt == "Quit") return 0;
        if(txt == "add"){
            std::cin >>firstName >> middleName >> lastName >> phoneNumber >> streetAddress >> houseNumber >> zipCode >> region;
            a_book.add_page(p,firstName,middleName,lastName,phoneNumber,streetAddress,houseNumber,zipCode,region);
        }
        else if(txt == "clr") a_book.clr(p);
        else if(txt == "qry") a_book.qry(p);
    }
    return -1;
}*/