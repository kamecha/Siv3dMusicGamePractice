//
//  Enemy.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#include "Enemy.hpp"
#include "Gamemgr.hpp"

void A::update(){ }

void A::draw(){
    //レーン
    for(int i = 0; i < 10; i++){
        Line(pos.x, pos.y, gamemgr.player.getplane(i).lpos.x, gamemgr.player.getplane(i).lpos.y).draw(2, ColorF(0.8, 0, 0, 0.8));
        Line(pos.x, pos.y, gamemgr.player.getplane(i).lpos.x + gamemgr.player.getplane(i).width, gamemgr.player.getplane(i).lpos.y).draw(2, ColorF(0.8, 0, 0, 0.8));
    }
}

void B::update(){
    pos += velocity;
}

void B::draw(){
    //レーン
    for(int i = 0; i < 10; i++){
        Line(pos.x, pos.y, gamemgr.player.getplane(i).lpos.x, gamemgr.player.getplane(i).lpos.y).draw(2, ColorF(0.8, 0, 0, 0.8));
        Line(pos.x, pos.y, gamemgr.player.getplane(i).lpos.x + gamemgr.player.getplane(i).width, gamemgr.player.getplane(i).lpos.y).draw(2, ColorF(0.8, 0, 0, 0.8));
    }
}
