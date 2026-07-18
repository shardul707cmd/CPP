#include<iostream>
class Person{
    public:
    int age;

    explicit Person(int a):age(a){

    }

};
void display(Person p){
    std::cout<<"Person details are: "<<p.age<<"\n";
}

int main (){
    display(Person(20));
    
    return 0;
}