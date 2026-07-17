#include<iostream>
#include "volume.h"

double volume (double radius , double height) {
    
    return 3.14 * radius * radius * height;
}


int main (){
    double r,h;

    std::cout<<"Enter the radius of cylinder : ";
    std::cin>>r;
    std::cout<<"\n Enter the height of cylinder : ";
    std::cin>>h;
    std::cout<<"\n The volume of cylinder is "<<volume(r,h)<<"\n";

    


    return 0 ;
}