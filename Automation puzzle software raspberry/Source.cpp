#include <iostream>
#include <thread>
#include <chrono>

#include "Automation.h"

int main(){
    Automation * game = Automation::getInstance();

    while(true){
        
        
        if (game->isGameRunning()){
            if (game->isPuzzleSolved())
            {
                std::cout << "Solution found!\n";
                return 0;
            }
        }else{
            game->sleepGame();
        }
        
        std::this_thread::sleep_for(std::chrono::milliseconds(32));
        
        //if is game running
            //check if there is a new config
                //get config
                
            //else check if config is solved
                //return a win statement
        //else
            //reset game
    }
    return 0;
}