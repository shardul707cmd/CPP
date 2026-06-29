#include<iostream>
#include<string>

std::string reversed(std::string s){
    std::string a = "";
    for (int i = s.length() -1 ;i>= 0;i-- ){
        a.push_back(s[i]);
    }





    return a ;
}


int main(){

    std::string s ;
    std::cout<<" Enter a string : ";
    std::getline(std::cin, s);
    std::cout<<"\n"<<reversed(s)<<"\n";
    return 0;

}