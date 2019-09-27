#include "Gamemgr.hpp"

void Gamemgr::update(){
    //敵の追加
    if(timer == 0){
	enemymgr.add(Vec2(Window::ClientWidth()/2, -50));
    }
    enemymgr.update();
    player.update();
    timer++;
}

void Gamemgr::draw(){
    ClearPrint();
    enemymgr.draw();
    player.draw();
}

Gamemgr gamemgr;
