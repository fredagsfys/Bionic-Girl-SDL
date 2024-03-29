//
//  main.cpp
//  BionicGirl
//
//  Created by Haris Kljajic on 2021-08-13.
//

#include <iostream>
#include "MenuState.h"


int main(int argc, char* argv[]){
    float currentFrame = (float)SDL_GetTicks();
    float lastFrame = 0;
    float deltaTime = 0;

    GameInst::Instance()->init("Bionic Girl", "./assets/icon.png", 1024, 720, false);
    GameInst::Instance()->change_state(MenuState::Instance());

    while (GameInst::Instance()->running()){
        lastFrame = currentFrame;
        currentFrame = (float)SDL_GetTicks();

        GameInst::Instance()->handle_events();

        deltaTime = (currentFrame - lastFrame) * (60/1000.0f);
        GameInst::Instance()->update(deltaTime);
        GameInst::Instance()->draw();
    }

    GameInst::Instance()->clean();

    return 0;
}
