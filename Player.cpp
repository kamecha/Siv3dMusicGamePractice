#include "Player.hpp"
#include "Gamemgr.hpp"

void Player::changezanki(){
    zanki--;
}

void Player::update(){
    if(KeyF3.down()){
	gamemgr.changemode();
    }
}

void Player::draw(){
    for(auto& lane: plane){
	lane.draw();
    }
    Print << U"score:" << score;
    Print << U"combo:" << combo;
    Print << U"残機:" << zanki;
    if(zanki <= 0){
	Print << U"Gameover"; 
    }
}
