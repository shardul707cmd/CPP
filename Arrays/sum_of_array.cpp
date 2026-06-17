#include<iostream>

int sum(int arr[],int size){

    int total = 0 ;
    for (int i = 0 ; i< size  ; i++){
        total+=arr[i];
     } 
    return total;

    
    }
    





int main(){
    int size;
    std::cout << " \n Enter the size of array : ";
    std::cin >> size;
    int arr[size];
    for (int i = 0; i<= size-1; i++){
        std::cout<<"Enter the number at index "<<i<<" :";
        std::cin>>arr[i];

    }
    std::cout<<"The sum of elements   in the array is "<<sum(arr,size)<<"\n";




    return 0;
}