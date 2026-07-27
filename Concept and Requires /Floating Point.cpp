#include<iostream>
#include<concepts>
template< std::floating_point T>
void print(T value) {
    std::cout << value << std::endl;
}   


int main() {
    print(10.5);  
    
    
    return 0;}