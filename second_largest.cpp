#include<iostream>

int second_largest(int arr[],int size){

    int largest ;
    int second_largest ;
    for (int i = 0 ; i<= size -1 ; i++){
        if (size == 1){
            return arr[0];
        }
        if (i == 0){
            largest = arr[i];
        }
        if (i == 1){
            if (arr[i]> largest){
                second_largest = largest;
                largest = arr[i];
            }
            else{
                second_largest = arr[i];

            }
        }
        if (arr[i]>second_largest){
            if(arr[i] > largest){
                second_largest = largest;
                largest = arr[i];
            }
            else{
                second_largest = arr[i];
            }         

        }
        }
    return second_largest;

    
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
    std::cout<<"The second largest number in the array is "<<second_largest(arr,size)<<"\n";




    return 0;
}