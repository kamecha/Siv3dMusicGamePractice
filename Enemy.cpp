#include "Enemy.hpp"
#include "Gamemgr.hpp"

void EnemyA::update(){
}

void EnemyA::draw(){
    //レーンの表示
    for(int i = 0; i <= 10; i++){
	Line(pos, Window::ClientWidth()/10*i, Window::ClientHeight()).draw(3, ColorF(1, 0, 0, 0.5));
    }
}
