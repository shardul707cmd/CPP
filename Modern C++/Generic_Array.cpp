#include<iostream>
#include<string>
template<typename T>
class generic_array {



    public:
    
        T arr[10];
    void insert(){
        for (int i = 0; i<10; i++){
            std::cout<<"Enter element for index "<<i<<" : ";
            std::cin>>arr[i];
        }
    }
    void show(){
        for (int i = 0; i<10; i++){
            std::cout<<"\n"<<arr[i];
        }
    }




};


int main (){
    generic_array<int> a;
    a.insert();
    generic_array<std::string> b;
    b.insert();
    a.show();
    b.show();




}