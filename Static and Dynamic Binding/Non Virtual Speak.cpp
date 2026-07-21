#include<iostream>

class Animal{

    public:
        void speak(){
            std::cout << "Animal speaks" << std::endl;
        }     

};
class Dog : public Animal{

    public:
        void speak(){
            std::cout << "Dog barks" << std::endl;
        }     

};

int main(){
   Animal *animal = new Dog();
   animal->speak(); 

    return 0;
    
}