#include<iostream>
#include<memory>


int main (){
    auto ptr = std::make_shared<int>(14);
    auto ptr2 = ptr;
    std::cout<<ptr.use_count()<<"\n";
    auto ptr3 = ptr;
    auto ptr4 = ptr;
    std::cout<<ptr.use_count()<<"\n";

    return 0;
}