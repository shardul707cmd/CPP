#include<iostream>

template<typename T>
void print(T value){
    std::cout << value << std::endl;
}





int main() {
    int a = 10;
    double b = 3.14;
    std::string c = "Hello, World!";
    print(a);
    print(b);
    print(c);
    return 0;
}