#include<iostream>
class Student {
public:
    static int count;

    Student() {
        count++;
        std::cout << "Member no: " << count << "\n";
    }
};

int Student::count = 0;

int main() {
    Student a;
    Student b;
    Student c;




    return 0 ;
}