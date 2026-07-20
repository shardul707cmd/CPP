#include<iostream>
class Student{
    public:
    std::string name;
    int roll_no,marks;
    Student(std::string n,int r,int m):name(n),roll_no(r),marks(m){

    }
    
   


};
std::ostream& operator<<(std::ostream& os, const Student& s) {
    os << "Name: " << s.name << std::endl;
    os << "Roll No: " << s.roll_no << std::endl;
    os << "Marks: " << s.marks << std::endl;
    return os;
}
int main() {
    Student s("Alice", 1, 85);
    std::cout << s;
    return 0;
}
