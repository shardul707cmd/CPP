#include<iostream>
#include<cmath>

bool isArmstrong(int number){
    int num = number;
    int no = number;
    int n = number;
    int count = 0;
    int sum = 0;
    while (num>=1 )

    {   
        num /= 10;
        count+=1;
    }
    while(no>=1){
        no /=10;
        sum += std::pow((n- no*10), count);
        n /=10;

    }
    if (sum == number){
        return true;

    }
    else{
        return false;
    }
    
}
int main (){
    int number;
    std::cout<<"\n Enter a number : ";
    std::cin>>number;
    if(isArmstrong(number)){
        std::cout<<"\n The number is a armstrong number \n";
    }
    else{
        std::cout<<"\n The number is not a armstrong number \n";
        
    }


    return 0; 
}