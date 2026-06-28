#include<iostream>
#include<string>
#include<cctype>

int count_words(std::string s){
    int count=0;
    bool word = false;

    for(char c : s){
        if (c){
            if(isalnum(c)){
                word = true;
            }
            if((isblank(c)) || (c=='\n')){
                if (word){
                    count+=1;
                    word=false;
                }
            }

        }
    }
    if(word){
        count+=1;


    }
    




    return count;

}

int main(){
    std::string s;

    std::cout<<"Enter a string : ";
    std::getline(std::cin , s);
    std::cout<<"\n The number of words are "<<count_words(s)<<"\n";


    return 0;

}