#include<iostream>
#include<string>
#include<unordered_map>

void character_frequency(std::string s){
    std::unordered_map<char,int> frequency;
    for(char c : s){
        if(!frequency[c]){
            frequency[c] = 1;
        }
        else{
            frequency[c]+=1;
        }
    }
    for (auto  it = frequency.begin();it!=frequency.end(); ++it){
        std::cout<<"\n"<<it->first<<"  :"<<it->second;
    }
    
   
}


int main(){

    std::string s ;
    std::cout<<" Enter a string : ";
    std::cin>>s;
    character_frequency(s);
   
    return 0;

}