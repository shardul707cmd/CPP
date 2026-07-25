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
    Animal* animal1 = new Dog();
    Animal* ptr  = nullptr;
    ptr = dynamic_cast<Dog*>(animal1);
    if(ptr != nullptr) {
        std::cout<<"Object is of type Dog"<<std::endl;
    } else {
        ptr = dynamic_cast<Cat*>(animal1);
        if(ptr != nullptr) {
            std::cout<<"Object is of type Cat"<<std::endl;
        } else {
            ptr = dynamic_cast<Horse*>(animal1);
            if(ptr != nullptr) {
                std::cout<<"Object is of type Horse"<<std::endl;
            } else {
                std::cout<<"Object is of type Animal"<<std::endl;
            }
        }
    }

    return 0;
}