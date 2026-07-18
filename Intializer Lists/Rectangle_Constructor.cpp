#include<iostream>
class Rectangle{
    int length,breadth;

    public:
    Rectangle(int l , int b) : length(l),breadth(b){

    }
    int area() const{
        return length * breadth;

    }
    



};


int main (){
    Rectangle a(10,20);
    std::cout<<"The area of rectangle is "<<a.area()<<"\n";







    return 0;
}