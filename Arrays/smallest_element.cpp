#include<iostream>

 int smallest_element(int arr[],int size){

    int smallest ;
    for (int i = 0 ; i<= size -1 ; i++){
        if (i == 0){
            smallest = arr[i];
        }

        if(arr[i] < smallest){
            smallest = arr[i];            
        }
        }
    return smallest;

    
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
    std::cout<<"The smallest number in the array is "<<smallest_element(arr,size)<<"\n";




    return 0;
}