#include<iostream>



int main (){
    auto ptr = std::make_shared<int>(10);
    std::weak_ptr p1 = ptr;
    std::cout<<ptr.use_count()<<"\n";
   auto p2 = p1.lock();
   std::cout<<ptr.use_count()<<"\n";
   p1.reset();
   std::cout<<ptr.use_count()<<"\n";





    return 0;
}