
#include<iostream>
#include<string>

template<typename T,typename U>
void print(T value,U value2){
    std::cout << value << " " << value2 << std::endl;
}
template<>
void print<int,double>(int value,double value2){
    std::cout << "Integer value: " << value << " Double value: " << value2 << std::endl;
}

int main()
{   print(10, std::string("Hello"));
    print(10, 3.14);
    return 0;
}