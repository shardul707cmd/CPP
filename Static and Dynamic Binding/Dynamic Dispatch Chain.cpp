#include<iostream>

class Animal{

    public:
       virtual void speak(){
            std::cout << "Animal speaks" << std::endl;
        }     


};
class Mammal : public Animal{

    public:
        void speak(){
            std::cout << "Mammal speaks" << std::endl;
        }     

};
class Dog : public Mammal{

    public:
          void speak(){
            std::cout << "Dog barks" << std::endl;
        }     

};

int main(){
   Animal *animal = new Dog();
   Mammal *mammal = new Dog();
   mammal->speak();
   animal->speak(); 

    return 0;
    
}