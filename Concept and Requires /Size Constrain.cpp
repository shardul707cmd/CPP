#include<iostream>

template <typename T>
concept SizeConstrain = requires {
    
    requires(sizeof(T)>4);
};
template <SizeConstrain T>
void print(T a){
   std::cout<<a;
}



int main (){
    print(7,8967);
    return 0;

}