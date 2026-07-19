#include<iostream>
#include<iomanip>

class Fraction{
    int numerator,denominator;
    public:
    Fraction(int n, int d) : numerator(n), denominator(d){

        std::cout<<"Fraction"<<numerator<<"/"<<denominator<<" created"<<std::endl;
    }
    bool operator==(const Fraction&other)const{
        if(numerator*other.denominator==denominator*other.numerator){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    Fraction f1(1, 2);
    Fraction f2(2, 4);
    Fraction f3(3, 4);
    std::cout<<std::boolalpha<<(f1==f2)<<std::endl;
    std::cout<<(f1==f3)<<std::endl;



    return 0;
}