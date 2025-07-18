#include <iostream>

int main(){

    int* pNum = NULL;
    pNum = new int;
    *pNum = 10;

    if(pNum == NULL){
        std::cout<<"The variable is not yet assign with memory address.";
    }
    else{
        std::cout<<"The memory address has successfully assigned.\n";
        std::cout<<"Current memory address: "<<pNum<<"\n";
        std::cout<<"Stored value: "<<*pNum;
    }
    delete pNum;

    return 0;
}