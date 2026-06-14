#include <iostream>
int  isPrime (int number){
    if (number== 0 || number == 1){
        std::cout<<"\n The number is neither  a prime number nor a composite number\n";
    }
    else{
    for (int i = 2; i<=(number/2); i++){
        if(number%i == 0){
            std::cout<<"\nThe number is not a prime number\n";
            return 0;
        }

    }
    std::cout<<"\nThe number is a prime number\n ";
    }
    return 0;
}
int main (){
    int number;
    std::cout<<"Enter a number: ";
    std::cin>>number;
    isPrime(number);
    return 0; 

}