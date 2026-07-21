#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
};

class Dog : public Animal {
public:
    void speak() override final {
        std::cout << "Dog barks" << std::endl;
    }
};

class GermanShepherd : public Dog {
    
    // Cannot override speak() because Dog::speak() is final.
};

int main() {
    Animal* animal = new GermanShepherd();
    animal->speak();

    delete animal;

    return 0;
}