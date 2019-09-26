#include "Gamemgr.hpp"

void Gamemgr::update(){
    //敵の追加
    if(timer == 0){
	enemymgr.add(Vec2(Window::ClientWidth()/2, 0));
    }
    enemymgr.update();
    timer++;
}

void Gamemgr::draw(){
    enemymgr.draw();
}
