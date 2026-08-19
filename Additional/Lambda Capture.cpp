#include<iostream>

int main(){
    int x = 10;
    int y = 20;
    auto display_x = [x](){
        return x;
    };
    auto add = [=](){
        return x+y;
    };
    x = 20;
    y = 45;
    auto modify_y = [&y](){
        y = 60;
    };
    auto modify_variabes = [&]{
        x = 100;
        y = 180;
    };
    std::cout<<display_x();
    std::cout<<"\n"<<add();
    modify_y();
    std::cout<<"\nThe new value of y is : "<<y<<"\n";
    modify_variabes();
    std::cout<<"\n The modified  value of x is : "<<x<<"\n The modified value of y is: "<<y<<"\n";





    return 0;
}