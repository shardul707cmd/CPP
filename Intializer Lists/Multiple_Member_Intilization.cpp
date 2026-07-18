#include<iostream>

class Employee {
    int age , salary;
    std::string name;
    public:

    Employee(int a , int b , std::string n): age(a),salary(b),name(n){
        std::cout<<"Employee "<<name<<" created of age "<<age<<" with salary "<<salary<<"\n";
    }

};

int main (){
    Employee Shardul(20, 90000,"Shardul");
    Employee Josh(25,150000,"Josh");




    return 0;

}