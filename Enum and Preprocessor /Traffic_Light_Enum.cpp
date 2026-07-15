#include<iostream>
enum class  Traffic_Light{
    Red,
    Yellow,
    Green,
};

int main (){
    Traffic_Light a = Traffic_Light::Red;
    if(a == Traffic_Light::Green){
        std::cout<<"Go\n";
    }
    else if(a == Traffic_Light::Yellow){
        std::cout<<"Get ready\n";
    }
    else{
        std::cout<<"Stop";
    }

    


}