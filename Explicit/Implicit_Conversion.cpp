#include<iostream>
class Person{
    int age;
public:
    Person(int a):age(a){
        std::cout<<"Person constructor called with age "<<age<<"\n";
    }

};


int main (){
    Person p1 = 20;


    return 0;
}