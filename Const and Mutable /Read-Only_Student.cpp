#include<iostream>
class Student {
    int age,marks ;
    public:
    int get_age()const{
        return age;
    }
    int get_marks()const{

        return marks;
    }
    void set_age(int a){
        age = a;
    }
    void set_marks(int m){
        marks = m;
    }
};
int main (){
    Student t;
    t.set_age(10);
    t.set_marks(70);
    std::cout<<"Age :"<<t.get_age();
    std::cout<<"\nMarks: "<<t.get_marks()<<"\n";


    return 0;
}