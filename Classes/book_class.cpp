#include<iostream>

class Book {

    public :
        int price;
        std::string title,author;


};
int main (){
    Book A,B;
    A.author = "Robert Martin";
    A.price = 499;
    A.title = "Clean Code";
    B.author= "Bjarne Stroustrup";
    B.price = 899;
    B.title = "The C++ Programming Language";
    std::cout<<"The Book "<<A.title<<" by "<<A.author<<" is priced at ₹"<<A.price<<"\n";
    std::cout<<"The Book "<<B.title<<" by "<<B.author<<" is priced at ₹"<<B.price<<"\n";




    return 0; 
}