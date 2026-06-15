#include<iostream>

int search(int arr[],int size,int target){
    
    for (int i = 0  ; i<size ; i++){
        if (arr[i] == target)
        {
            return i;

        }
    }
    return -1;

    
    }
    





int main(){
    int size;
    int target;
    std::cout << " \n Enter the size of array : ";
    std::cin >> size;
    int arr[size];
    for (int i = 0; i<= size-1; i++){
        std::cout<<"Enter the number at index "<<i<<" :";
        std::cin>>arr[i];

    }
    std::cout<<"\n Enter the number to be searched : ";
    std::cin>>target;
    int output = search(arr,size,target);

   if (output >=0){
    std::cout<<"The element "<< target<< " was found at index "<<output<<"\n";
   }
   else{
    std::cout<<"\nElement not found ";
   }




    return 0;
}