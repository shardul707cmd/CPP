#include<iostream>
class counter{

    int count;
public:
    counter(int c):count(c){

    }
     int operator++(int) {
        count+=1;
        return count-1;
    } 
    int operator++() {
        
        count+=1;
        return count;
    }
};

int main(){
    counter c(5);
    std::cout<<c++<<std::endl;
    std::cout<<++c<<std::endl;
    



    return 0;
}