#include<iostream>
#include<concepts>


template <typename T>
concept addable = requires (T a , T b){

    a+ b;
  };

template <addable T>
T add (T a) {
    return a+a;
}


int main (){

    std::cout<<"\n"<<add(5);
    std::cout<<"\n"<<add(std::string("abc"));



    return 0 ;

}