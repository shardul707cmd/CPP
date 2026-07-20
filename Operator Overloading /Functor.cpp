#include<iostream>
class Number{

    int number;
public:
    Number(int n):number(n){

    }
    int operator() (int n)const{
        return number+n;
    }




};

int main() {
    Number n(5);
    std::cout<<n(10)<<std::endl;
    
    return 0;
}