
#include<iostream>
#include<string>
template<typename T>
void print(T value){
    std::cout << value << std::endl;
}
template<>
void print<std::string>(std::string value){
    std::cout << "String value: " << value << std::endl;
}

int main()
{
    std::string c = "Hello, World!";
    print(c);
    return 0;
}