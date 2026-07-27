#include<iostream>
template <typename T>
concept Printable = requires (T a) {
    std::cout<<a;

    
};
template <Printable T>
void print(T a){
    std::cout<<a<<std::endl;
}

int main (){
    print(5);

    return 0;
}