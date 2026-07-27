#include<iostream>
template <typename T>
concept NumberLike = requires(T a,T b){
    a+b;
    a-b;
    a*b;
    a/b;

    
};
template <NumberLike T>
T add(T a,T b){
    return a+b;
}

int main (){
    std::cout<<add(5,6)<<std::endl;

    return 0;
}