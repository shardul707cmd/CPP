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

int main (){
    Animal* animal1 = new Cat();
    Dog* ptr1 = static_cast<Dog*>(animal1);// Unsafe Downcasting
    Dog* ptr2 = dynamic_cast<Dog*>(animal1);
    std::cout << "ptr1: " << ptr1 << std::endl;
    std::cout << "ptr2: " << ptr2 << std::endl;
    

    return 0;
}