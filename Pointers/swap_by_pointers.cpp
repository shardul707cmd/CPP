#include<iostream>

void pointer_swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
    
}
int main (){
    int a,b;
    std::cout<<"\n Enter the value of a :";
    std::cin>>a;
    std::cout<<"Enter the value of b: ";
    std::cin>>b;
    pointer_swap(&a,&b);
    std::cout<<"\nThe value of a is "<<a;
    std::cout<<"\nThe value of b is "<<b;



    return 0 ;

}