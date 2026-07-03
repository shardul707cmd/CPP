#include<iostream>
int main (){

    int size ;
    std::cout<<"Enter the size of the array:";
    std::cin>>size;
    int *a = new int[size];
    for (int i = 0 ; i<size; i++){
        std::cout<<"Enter the element at index "<<i<<" :";
        std::cin>>a[i];
    }
    for (int i = 0 ; i<size; i++){
        std::cout<<a[i]<<" ";

      
    }
    delete []a;


    return 0;
}