#include <iostream>

int main(){

    std::string* pFood = NULL; //string pFood tidak mempunyai memory address, can't stored element.
    int size;

    std::cout<<"Enter amount of size: ";
    std::cin>>size;
    pFood = new std::string[size]; //Allocate spaces untuk array pFood.

    for(int i=0; i<size; i++){
        std::cout<<"List foods that you likes #"<<i + 1<<" :";
        std::getline(std::cin>>std::ws, pFood[i]); //Iterates index dalam array pFood.
    }
    std::cout<<"Memory address: "<<&pFood<<'\n';
    for(int i=0; i<size; i++){
        std::cout<<i+1<<"."<<pFood[i]<<" \n"; //Code printout loop yang telah selesai iterates index.
    }
    delete[] pFood;

    return 0;
}