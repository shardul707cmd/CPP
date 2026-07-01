#include<iostream>
int main() {
    int arr[5] ;
    std::cout <<"Enter the 5 values of the array :";
    for (int i = 0; i<5; i++){
        std::cin>>arr[i];

    }
    for(int i = 0; i<5; i++){
        std::cout<<*(arr + i)<<"\n";
    }


    return 0;

}