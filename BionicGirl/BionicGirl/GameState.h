#pragma once
#include "Game.h"

class GameState{
public:
	virtual void Init() = 0;
	virtual void Clean() = 0;
	virtual void Pause() = 0;
	virtual void Resume() = 0;
	virtual void HandleEvents() = 0;
	virtual void Update(double deltaTime) = 0;
	virtual void Draw() = 0;

	void ChangeState(GameState* state){
		GameInst::Instance()->ChangeState(state);
	}

protected:
	GameState(){
	}

	~GameState(){
	}


};

