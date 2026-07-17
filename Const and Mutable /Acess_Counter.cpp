#include<iostream>

class Employee{
    public:
    mutable int  hrs_worked = 0;
    int id,salary;
    std::string name;


    Employee(std::string n, int i , int s){
        name = n;
        id = i;
        salary = s;
    }
    void incr_work_hrs() const{
        hrs_worked++;

    }
};

int main (){
    Employee Harris("Harris",1,50000);
    Harris.incr_work_hrs();
    std::cout<<"\nHours worked = "<<Harris.hrs_worked;
    Harris.incr_work_hrs();
    Harris.incr_work_hrs();
    std::cout<<"\n Hours worked = "<<Harris.hrs_worked;


}