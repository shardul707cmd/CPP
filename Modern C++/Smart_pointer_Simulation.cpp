#include<iostream>
#include<memory>
template<typename T>
class unique {
    public:
    T *ptr;
    unique(const unique&) = delete;
    unique& operator=(const unique&) = delete;

    



    unique(T *a){
        ptr = a;
    }

    T& operator*(){

        return *ptr;
    }
    T* operator -> (){
        return ptr;
    }


    ~unique(){
       delete ptr;


    }






};

class Student {
public:
    std::string name;
    int roll;

    Student(std::string n, int r)
        : name(n), roll(r)
    {
        std::cout << "Student Created\n";
    }

    ~Student()
    {
        std::cout << "Student Destroyed\n";
    }
};


int main()
{
    unique<Student> student(new Student("Shardul", 101));

    std::cout << student->name << '\n';
    std::cout << student->roll << '\n';

    std::cout << (*student).name << '\n';
    std::cout << (*student).roll << '\n';

    return 0;
}