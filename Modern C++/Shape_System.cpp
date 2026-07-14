#include<iostream>
#include<memory>


class Shape {
    public:

     virtual double area () = 0;

     virtual ~Shape() {

    };
};

class Circle : public Shape{
    public :
    double radius ;

    Circle (int r){
        radius = r;
    }
    double area () override {
        return 3.14*radius*radius;

    }
    ~Circle () override{

    }
};
class Rectangle : public Shape {
    public :
    double length , breadth ;
    Rectangle(int l,int b){
        length = l;
        breadth = b;
    }
    double area() override{
        return length * breadth;

    }
    ~Rectangle() override{

    }

};

int main (){
    std::unique_ptr<Shape> arr[2];
    arr[0] = std::make_unique<Circle>(5);
    arr[1] = std::make_unique<Rectangle>(4, 6);
    for (int i = 0; i < 2; i++) {
    std::cout << arr[i]->area() << '\n';
}




    return 0 ;

}