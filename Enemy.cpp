//
//  Enemy.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#include "Enemy.hpp"
#include "Gamemgr.hpp"
#include "Player.hpp"

Note A::noteupdate(Note note){
    //Playerのレーンに沿ってノーツ流す
    Plane tmp = gamemgr.player.getplane(note.lane);
    note.lpos.y += note.speed;
    note.lpos.x = pos.x + (pos.x-tmp.lpos.x)/(pos.y-tmp.lpos.y)*(note.lpos.y-pos.y);
    note.width = (note.lpos.y-pos.y)/(tmp.lpos.y-pos.y)*tmp.width;
    return note;
}

void A::update(){ }

void A::draw(){
    //レーン
    for(int i = 0; i < 10; i++){
        Line(pos.x, pos.y, gamemgr.player.getplane(i).lpos.x, gamemgr.player.getplane(i).lpos.y).draw(2, ColorF(0.8, 0, 0, 0.8));
        Line(pos.x, pos.y, gamemgr.player.getplane(i).lpos.x + gamemgr.player.getplane(i).width, gamemgr.player.getplane(i).lpos.y).draw(2, ColorF(0.8, 0, 0, 0.8));
    }
    //敵本体
    image.draw(pos);
}

Note B::noteupdate(Note note){
    //Playerのレーンに沿ってノーツ流す
    Plane tmp = gamemgr.player.getplane(note.lane);
    note.lpos.y += note.speed;
    note.lpos.x = pos.x + (pos.x-tmp.lpos.x)/(pos.y-tmp.lpos.y)*(note.lpos.y-pos.y);
    note.width = (note.lpos.y-pos.y)/(tmp.lpos.y-pos.y)*tmp.width;
    return note;
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
    //敵本体
    image.draw(pos);
}
