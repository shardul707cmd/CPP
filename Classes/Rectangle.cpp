#include<iostream>
class Rectangle{
    public :
        double length, width;
        double perimeter(){
            return (2*length+2*width);
        }
        double area(){
            return (length*width);
        }


};

int main (){
    Rectangle A,B;
    A.length = 10;
    A.width = 15;
    B.length = 18;
    B.width = 25;
    std::cout<<"Perimeter of Rectangle  A is "<<A.perimeter()<<" and its area is "<<A.area()<<"\n";
    std::cout<<"Perimeter of Rectangle  B is "<<B.perimeter()<<" and its area is "<<B.area()<<"\n";





    return 0;

}