#include <iostream>
#include<string>

int count_vowels(std::string s){
    int count = 0;
    for (char c : s)
    {
        if ((std::tolower(c) == 97) ||  (std::tolower(c)== 101) || (std::tolower(c)== 105)||(std::tolower(c)== 111) ||(std::tolower(c)==117)){
            count+=1;
        }
    }
    return count;
}
int main(){
    std::string s;
    std::cout<<"Enter a word :";
    std::cin>>s;
    std::cout<<"\n The number of vowels in the word is "<<count_vowels(s)<<std::endl;


// 101 105 111 117

    return 0;

}