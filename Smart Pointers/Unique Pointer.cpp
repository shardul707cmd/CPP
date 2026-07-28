#include<iostream>
#include<memory>

int main(){

    auto ptr = std::make_unique<int>(10);
    std::cout<<*ptr<<std::endl;


    return 0;
}