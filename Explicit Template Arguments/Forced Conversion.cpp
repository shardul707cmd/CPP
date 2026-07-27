#include<iostream>
template <typename T>
T add(T a, T b){
    return a + b;
}



int main (){
    std::cout<<add<int>(12.3, 14.7)<<std::endl;// converts 12.3 to 12 and 14.7 to 14
    


    return 0;
}