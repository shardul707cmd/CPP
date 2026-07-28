#include<iostream>
#include<concepts>


class Animal{
    public:
    
    Animal(){
        std::cout<<"Animal Created";

    }
};  
class Cat: public Animal{

    public:
    Cat(){
        std::cout<<"Cat created";
    
    }
    void speak(){
        std::cout<<"Meow";
    }
    
};
class Dog : public Animal{
    public:
    Dog(){
    std::cout<<"Dog created";
    }
    void speak(){
        std::cout<<"Woof";
    }

};


template <typename T>
concept Derived = requires {
    requires(std::derived_from<T,Animal>);
    
};
template <Derived T>
void speak(T a){
   a.speak();
}



int main (){
   Dog d;
   speak(d);
    return 0;

}