#include<iostream>
class Employee {
    public:
    virtual void work() = 0;

    virtual ~Employee(){
        std::cout<<"\nEmployee Destroyed";
    }

};

class Manager : public Employee{
    public:
    void work() override{
        std::cout<<"\nManager is managing the team";

    }
    ~Manager(){
        std::cout<<"\nManager Destroyed ";


    }
    
};
class Developer : public Employee{
    public:
    void work() override {
        std::cout<<"\nDeveloper is writing code";

    }
    ~Developer(){
        std::cout<<"\nDeveloper destroyed";

    }

};
class Salesperson : public Employee{
    public:
    void work() override{
        std::cout<<"\nSalesperson is in a meeting with client ";
    }
    ~Salesperson(){
        std::cout<<"\nSalesperson destroyed";

    }
};


int main (){
    Employee * a = new Manager;
    Employee * b = new Developer;
    Employee * c = new Salesperson;
    a->work();
    b->work();
    c->work();
    delete a;
    delete b;
    delete c;




    return 0;

}