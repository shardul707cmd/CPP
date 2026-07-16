#include<iostream>
#define DEBUG




double area(double radius){
    return  3.14 * radius * radius;
}
int main (){
    #ifdef DEBUG
    std::cout<<"Program Started";
    #endif
    std::cout<<area(10);
   



    return 0;

}