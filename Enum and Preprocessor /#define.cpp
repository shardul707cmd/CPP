#include<iostream>
#define PI 3.14159

double area ( double radius ){
    return PI * radius * radius;

}

int main (){
    double r;
    std::cout<<"Enter the radius : ";
    std::cin>>r;
    std::cout<<"\n The area of the circle is "<<area(r)<<"\n";



    return 0;
}