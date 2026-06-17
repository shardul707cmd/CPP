#include <iostream>
#include <string>
int string_length(std::string s){
    for(int i = 0; ; i++){
        try{
            s.at(i);
        }
        catch(std::out_of_range){
            return i;
        }
           
    }


}
int main(){
        std::string s;
        std::cout<<"\n Enter a string :";
        std::cin>>s;
        std::cout<<"The length of the string is "<<string_length(s)<<"\n";

    return 0 ;

}