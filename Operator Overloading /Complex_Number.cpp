#include<iostream>

class Complex_Number{
    int real,imaginary;
    public:
    Complex_Number(int r, int i): real(r),imaginary(i){

        std::cout<<"Complex Number Created: "<<real<<" + "<<imaginary<<"i"<<std::endl;
    }
    
    Complex_Number operator+(const Complex_Number& other) const{
        return Complex_Number(real + other.real,imaginary+other.imaginary);

    }
    void display()const{
        std::cout<<real<<" + "<<imaginary<<"i"<<std::endl;
    }


    
};

int main(){
    Complex_Number c1(3, 4);
    Complex_Number c2(1, 2);
    Complex_Number c3 = c1 + c2;
    c3.display();

    return 0;


}