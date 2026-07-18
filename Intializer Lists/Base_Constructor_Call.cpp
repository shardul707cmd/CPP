#include<iostream>

class Person{
    public:
    int age ;
    std::string name;
    
    Person(int a , std::string n) : age(a), name(n){
        std::cout<<"Person Constructed";
    }
};
class Employee : public Person{
    public:
    int salary;
    Employee(int a, int b , std::string c): salary(a), Person(b, c){
        std::cout<<"Employee Constructed";
    }
};


int main (){
    Employee e(1000, 25, "John");


    return 0;

}