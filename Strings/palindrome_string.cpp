#include<iostream>
#include<string>

bool palindrome(std::string s){
    std::string a = "";
    for (int i = s.length() -1 ;i>= 0;i-- ){
        a.push_back(s[i]);
    }
    if (a==s){
        return true;
    }
    return false;





   
}


int main(){

    std::string s ;
    std::cout<<" Enter a string : ";
    std::getline(std::cin, s);
    if(palindrome(s)){
        std::cout<<"The string is a palindrome";

    }
    else{
        std::cout<<"The string is not a palindrome\n";
    }
    return 0;

}