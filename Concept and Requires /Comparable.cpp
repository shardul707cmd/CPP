#include<iostream>
template <typename T>
concept Comparable = requires (T a, T b){
    a==b;
    a>b;
    a<b;
    a>=b;
    a<=b;

};
template <Comparable T>
void compare(T a, T b){
    if(a==b){
        std::cout<<"Equal"<<std::endl;
    }else if(a>b){
        std::cout<<"Greater"<<std::endl;
    }else{
        std::cout<<"Lesser"<<std::endl;
    }
}   


int main (){    

    compare(5, 10); 

    return 0;
}