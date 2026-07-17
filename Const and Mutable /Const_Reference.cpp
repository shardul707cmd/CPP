#include<iostream>

void print_name(const std::string& a){
    std::cout<<"Your name is "<<a<<"\n";
}


int main (){
    std::string name;
    std::cout<<"Enter your name :";
    std::cin>>name;
    print_name(name);


    return 0 ; 
}