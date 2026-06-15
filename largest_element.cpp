#include<iostream>

 int largest_element(int arr[],int size){

    int largest ;
    for (int i = 0 ; i<= size -1 ; i++){
        if (i == 0){
            largest = arr[i];
        }

        if(arr[i] > largest){
            largest = arr[i];            
        }
        }
    return largest;

    
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
    std::cout<<"The largest number in the array is "<<largest_element(arr,size)<<"\n";




    return 0;
}