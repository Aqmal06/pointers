#include <iostream>
using std::cout;

int main(){

    //& - address-of operator (display the memory address for pointer variables)
    //* - dereference operator (display the variable value of the pointer)

    std::string name = "Aqmal";
    std::string* pName = &name;
    //std::string* ptr = &name;

    cout<<*pName;
    //cout<< &ptr;

    int age = 19;
    int* page = &age;

    cout<< *page;

    //we don't assign ampersand for array, as the array is already an address
    std::string letters[3] = {"A", "B", "C"};
    //std::string* ptr = letters;
    std::string* pletters = letters;

    cout<<*pletters;
    //cout<<*ptr;

    return 0;
}