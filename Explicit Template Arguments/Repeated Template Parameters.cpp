#include<iostream>
template <typename T, typename U>
U add(T a, U b, T c){
    return a + b;
}



int main (){
    std::cout<<add<int,double>(12.3, 14.7, 15.9)<<std::endl;// converts 12.3 to 12 , 15.9 to 15
    


    return 0;
}