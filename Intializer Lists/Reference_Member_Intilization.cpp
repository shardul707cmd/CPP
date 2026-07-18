#include<iostream>
class Car{
    public:
    
    int &speed;
    Car(int &t):speed(t){
        std::cout<<"Car Constructed ";
        std::cout<<speed<<"\n";

    }

};


int main (){
    int a = 250 , b = 300;
    Car Tesla(a);
    Car Bmw(b);




}