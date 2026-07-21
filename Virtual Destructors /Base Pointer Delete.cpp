#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
    ~Animal() {
        std::cout << "Animal destroyed" << std::endl;
    }

};

class Dog : public Animal {
public:
    void speak() override final {
        std::cout << "Dog barks" << std::endl;
    }
    ~Dog() {
        std::cout << "Dog destroyed" << std::endl;
    }
};



int main() {
    Animal* animal = new Dog();
    animal->speak();

    delete animal;

    return 0;
}