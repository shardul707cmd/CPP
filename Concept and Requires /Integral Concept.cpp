#include<iostream>
#include<concepts>
template< std::integral T>
void print(T value) {
    std::cout << value << std::endl;
}   


int main() {
    print(10);  
    
    
    return 0;
}