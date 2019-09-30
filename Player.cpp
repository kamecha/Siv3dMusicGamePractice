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
    Line(0, Window::ClientHeight()/5*4, Window::ClientWidth(), Window::ClientHeight()/5*4).draw(3, ColorF(0, 0.3, 0.2, 0.8));
    Print << U"score:" << score;
    Print << U"combo:" << combo;
    Print << U"残機:" << zanki;
    if(zanki <= 0){
	Print << U"Gameover"; 
    }
}
