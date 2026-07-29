#include<iostream>
#include<memory>

class Person{
    public:
    std::weak_ptr<Person> s;
    Person(){
        std::cout<<"Person Constructor called\n";
    }
    ~Person(){
        std::cout<<"Person Destructor called\n";
    }
};



int main (){
   auto ptr1 = std::make_shared<Person>();
   auto ptr2 = std::make_shared<Person>();
   ptr1->s = ptr2;  
   ptr2->s = ptr1;




    return 0;
}