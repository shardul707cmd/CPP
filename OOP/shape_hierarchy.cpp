#include<iostream>
#include<cmath>

class Shape{


    public :
    virtual double  area  () = 0;



    
    virtual double perimeter() = 0;


    
};
class Triangle : public Shape{
    public :
    double base , height ;


    double area  () override {
        return (base * height) / 2;

    }
    double perimeter () override {
        return base + height + sqrt(base*base + height * height );
    }

};
class Rectangle : public Shape{
    public:
        double length,breadth;
        double area () override{
            return length*breadth;
        }
        double perimeter () override {
            return 2*(length+breadth);
        }
};
class Circle : public Shape{

    public:
        double radius;
        double area () override {
            return  3.14*radius*radius;

        }
        double perimeter () override {
            return 2*3.14*radius;
        }


};

int main (){
    Circle a;
    a.radius = 10;
    Rectangle b ;
    b.length = 10;
    b.breadth = 17;
    Triangle c;
    c.base = 7.5;
    c.height = 9;

    std::cout<<"\nThe area of circle is "<<a.area()<<" and the perimeter is "<<a.perimeter();
    std::cout<<"\nThe area of rectangle is "<<b.area()<<" and the perimeter is "<<b.perimeter();
    std::cout<<"\nThe area of triangle is "<<c.area()<<" and the perimeter is "<<c.perimeter();


    return 0;
}