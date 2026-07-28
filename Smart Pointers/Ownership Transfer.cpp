#include<iostream>
#include<memory>

int main(){

    auto ptr = std::make_unique<int>(10);
    auto ptr2 = std::move(ptr);
    
    std::cout<<"Pointer 2:"<<*ptr2<<"\n";


    return 0;
}