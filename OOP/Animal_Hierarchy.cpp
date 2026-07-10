#include<iostream>

class Animal{
    public:
    void speak(){

        std::cout<<"Animal is speaking";
    }
    int eyes = 2, legs = 4;
    int speed;


};

class Dog : public Animal{
    public:
    Dog(){
        speed = 20;
    }

    void speak(){
        std::cout<<"woof-woof";

    }

    

};

class Cat : public Animal{
    public:
    Cat(){
        speed = 36;

    }
    void speak(){

        std::cout<<"meow-meow";
        
    }
    


};


int main(){

    Cat a;
    Dog b;
    std::cout<<"Speed of a is "<<a.speed<<" and it says ";
    a.speak();
    std::cout<<"\nSpeed of b is "<<b.speed<<" and it says ";
    b.speak();



    return 0;
}