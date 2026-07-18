#include<iostream>

class Student{
    public:
    const int roll;
    const std::string name;
    Student(int r , std::string& n): roll(r), name(n){
        std::cout<<"Student created with name "<<name<<"and roll no"<<roll<<" \n";

    }


};


int main (){
    Student John (1,"John");
    Student Sean(2,"Sean");


}