#include "Player.hpp"
#include "Gamemgr.hpp"

void Player::update(){
    if(KeyF3.down()){
	gamemgr.changemode();
    }
}

void Player::draw(){
    
}
