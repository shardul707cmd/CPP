#include<iostream>
class Bank{
    int balance = 0;
    public:
        int acc_no;
        std::string name;
        void withdraw(int a){
            if ((balance - a) < 0){
                std::cout<<"\nInsufficient amount";
            }
            else{
                balance -= a;
                std::cout<<"\nBalance is ₹"<<balance;

            }
        }
        void deposit(int a){
            balance+=a;
            std::cout<<"\nBalance is ₹"<<balance;
        }

        
   



};
int main (){

    Bank a;
    a.acc_no = 100;
    a.name = "Henry";
    a.deposit(1000);
    a.withdraw(10000);
    a.deposit(50000);
    a.withdraw(20000);


    return 0 ;
}