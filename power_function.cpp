#include <iostream>
int power_function (int base , int exponent){
    int output =1 ;

    for (int i =1 ; i<=exponent; i++){
        output = output * base;
    }
    return output;



}

int main (){
    int base,exponent;
    std::cout<<"Enter the base :";
    std::cin>>base;
    std::cout<<"\n Enter the power : ";
    std::cin>>exponent;
    std::cout<<"\n"<<base<<" raised to "<<exponent<<" is "<<power_function(base,exponent)<<"\n";
    return 0;
}