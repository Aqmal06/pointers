#include <iostream>

int main(){
    //Symbol ampersand
    //& - address-of operator (akan print output pointer memory address)

    //Symbol asterisk
    //* - dereference operator (print output pointer value)
    std::string name = "Aqmal";
    std::string* pName = &name;

    std::cout<<*pName<<"\n";

    int age = 19;
    int* page = &age;
    std::cout<< *page<<"\n";

    //Kita tidak assign ampersand untuk array, kerana array sudah ada address
    //Array sudah di allocated didalam stack memory, which memory tu sendiri sudah ada address.
    std::string FreeFood[5] = {"pizza", "hamburger", "macaroni", "pasta", "burrito"};
    std::string* pFreeFood = FreeFood;

    std::cout<<*(pFreeFood+0)<<'\n';

    //Special cases
    const char* pGrades[3] = {"A", "B", "C"};
    std::cout<<*pGrades<<"\n";

    return 0;
}