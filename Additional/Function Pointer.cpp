#include<iostream>

int add(int a , int b){

    return a+b;

}

int main (){

    int(*ptr)(int a, int b) = add;
    std::cout<<ptr(10,20)<<"\n";
    




    return 0; 
}