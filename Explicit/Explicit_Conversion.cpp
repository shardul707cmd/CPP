#include<iostream>
class Person{
    int age;
public:
    explicit Person(int a) : age(a){
        std::cout<<"Person constructor called with age "<<age<<"\n";
    }

};


int main (){
    Person p1 = Person(20);


    return 0;
}