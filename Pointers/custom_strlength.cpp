#include<iostream>

int length(char arr[]){
    int count = 0;

    for (int i = 0 ; ; i++){
        if (*(arr+i)== '\0'){
            return count;
        }
        count++;
    }
    
}

int main (){
    char arr [1000];
    std::cout<<"Enter the string :";
    std::cin>>arr;
    std::cout<<"\n The length of string is "<<length(arr)<<"\n";
    

    return 0;

}