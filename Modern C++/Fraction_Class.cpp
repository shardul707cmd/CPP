#include<iostream>
class Fraction{

    public :
    int numerator , denominator;
    Fraction(int num , int denom){
        numerator = num;
        denominator = denom;
    }
    Fraction operator+(Fraction & other){
        if (this->denominator == other.denominator){
            return Fraction((this->numerator + other.numerator), this->denominator);

        }
        else{
            return Fraction(((this->numerator * other.denominator)+ (other.numerator * this->denominator)), (this->denominator * other.denominator));

        }
    }
    void show(){
        std::cout<<numerator<<"/"<<denominator<<"\n";
    }
    

};

int main (){
    Fraction a(4,7);
    Fraction b(2,7);
    Fraction c(1,4);
    Fraction d = a+b;
    Fraction e = a +c;
    d.show();
    e.show();



    return 0;
}