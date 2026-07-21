#include <iostream>

class Animal {
public:
    virtual void speak() {
        std::cout << "Animal speaks" << std::endl;
    }
    virtual ~Animal() {
        std::cout << "Animal destroyed" << std::endl;
    }

};

class Dog : public Animal {

public:
    Dog() {
        std::cout << "Dog created" << std::endl;
    }
    int* ptr = new int(42); 
    void speak() override final {
        std::cout << "Dog barks" << std::endl;
    }
    ~Dog() {
        delete ptr;
        std::cout << "Dog destroyed" << std::endl;
    }
};



int main() {
    Animal* animal = new Dog();
    animal->speak();

    delete animal;

    return 0;
}