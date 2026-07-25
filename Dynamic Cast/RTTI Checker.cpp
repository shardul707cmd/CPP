#include<iostream>
#include<typeinfo>
class Animal {
    public:
        virtual void speak() {
            std::cout << "Animal speaks" << std::endl;
        }
};
class Dog : public Animal {
    public:
        void speak() override {
            std::cout << "Dog barks" << std::endl;
        }
};
class Cat : public Animal {
    public:
        void speak() override {
            std::cout << "Cat meows" << std::endl;
        }
};
class Horse : public Animal {
    public:
        void speak() override {
            std::cout << "Horse neighs" << std::endl;
        }
};
class Lion : public Animal {
    public:
        void speak() override {
            std::cout << "Lion roars" << std::endl;
        }
};

class Wolf : public Animal {
    public:
        void speak() override {
            std::cout << "Wolf howls" << std::endl;
        }
};

int main (){
    Animal* animals[10] = {new Dog(), new Cat(), new Horse(), new Lion(), new Wolf(), new Dog(), new Cat(), new Horse(), new Lion(), new Wolf()}; 
    for(int i = 0; i < 10; i++) {
      std::cout << "Animal at index " << i << "is a "<<typeid(*(animals[i])).name()<<"\n";
      animals[i]->speak();
      delete animals[i]; 
    }
    return 0;
}