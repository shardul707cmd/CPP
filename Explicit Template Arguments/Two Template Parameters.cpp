#include<iostream>
template <typename T, typename U>
U add(T a, U b){
    return a + b;
}



int main (){
    std::cout<<add<int,double>(12.3, 14.7)<<std::endl;// converts 12.3 to 12 
    


    return 0;
}