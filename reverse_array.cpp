#include<iostream>

int even(int arr[],int size){
    int reversed_array[size];
    for (int i = size -1  ; i>=0   ; i--){
        reversed_array[size - (i+1)] = arr[i];

     } 
     std::cout<<"\n Reversed Array\n";
     for(int i = 0; i<size; i++){
        std::cout<<reversed_array[i]<<" ";
     }
    return 0;

    
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
   even(arr,size);




    return 0;
}