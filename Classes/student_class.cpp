#include<iostream>

class Student {

    public :
        int marks , roll_no;
        std::string name;


};
int main (){
    Student A,B;
    A.name = "Harry";
    A.marks = 95;
    A.roll_no = 10;
    B.name= "Larry";
    B.marks = 55;
    B.roll_no = 20;
    std::cout<<A.name<<" has roll no "<<A.roll_no<<" and marks "<<A.marks<<"\n";
    std::cout<<B.name<<" has roll no "<<B.roll_no<<" and marks "<<B.marks<<"\n";




    return 0; 
}