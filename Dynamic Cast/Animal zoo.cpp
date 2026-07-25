#include<iostream>
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
    // finding all wolfs in the array and calling their speak method
    for(int i = 0; i < 10; i++) {
        Wolf* wolfPtr = dynamic_cast<Wolf*>(animals[i]);
        if(wolfPtr != nullptr) {
            std::cout << "Found a wolf at index " << i << ": ";
            wolfPtr->speak();  
        }
    }
    delete animals[10];
    return 0;
}