#include<iostream>
#include<string>
template <typename t>
t maximum(t a , t b)
{
    return (a>b)? a : b;

}


int main (){
    std::cout<<"\n"<<maximum(1,2);
    std::cout<<"\n"<<maximum(3.6,2.9);
    std::cout<<"\n"<<maximum('H','A');
    std::cout<<"\n"<<maximum(std::string("Dog"),std::string("Cat"));

    return 0;
}