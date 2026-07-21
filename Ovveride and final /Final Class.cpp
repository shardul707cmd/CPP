#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

class Dog final : public Animal {
public:
    void speak() override {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->speak();

    delete animal;

    return 0;
}