#include<iostream>

enum class GameState{

    Menu,
    Playing,
    Paused,
    GameOver,

};



int main (){


    GameState a = GameState::Paused;
    switch (a){
        case GameState::GameOver :
            std::cout<<"Game Over\n";
            break;
        case GameState::Menu :
            std::cout<<" Main Menu\n";
            break;
        case GameState::Paused:
            std::cout<<"Game has been paused\n";
            break;
        case GameState::Playing:
            std::cout<<"Game is running\n";
            break;

    }



    return 0 ;
}