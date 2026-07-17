#include<iostream>


class Car{
    public:
    int max_speed,distance;
    std::string color;
    void get_speed()const{

        std::cout<<"Max Speed is "<<max_speed<<"\n";
    }
    void get_distance()const{
        std::cout<<"Distance Travelled by the car is "<<distance<<"km\n";
    }
    Car(int s, int d){
        max_speed = s;
        distance = d;
    }


};
int main (){
    const Car Tesla(250,7643);
    Tesla.get_distance();
    Tesla.get_speed();

    





    return 0;
}