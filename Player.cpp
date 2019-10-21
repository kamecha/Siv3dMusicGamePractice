//
//  Player.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#include "Player.hpp"
#include "Gamemgr.hpp"
#include "Note.hpp"

void Player::judge(int lane){
    std::vector<Note>&notes = gamemgr.enemymgr.notes[lane];
    Plane clane = plane[lane];
    for(int lane = 0; lane < notes.size(); lane++){   //laneに存在するノーツの数
        if(notes[lane].lpos.y > clane.lpos.y + clane.height + 30)    continue;
        if(notes[lane].lpos.y <= clane.lpos.y + clane.height + 30 && notes[lane].lpos.y >= clane.lpos.y - 30 - notes[lane].height){
            if(notes[lane].lpos == clane.lpos)  score += 10000;
            combo++;
            score += 100;
            notes[lane].exit = false;
        }
        if(notes[lane].lpos.y < clane.lpos.y - 30 - notes[lane].height) break;
    }
}

void Player::update(){
    //判定レーン
    for(int i = 0; i < plane.size(); i++){
        plane[i].lane = i;
        plane[i].lpos = Vec2(Window::ClientWidth()/12*(i+1), Window::ClientHeight()/5*4);
        plane[i].width = Window::ClientWidth()/12;
        plane[i].height = 5;
    }
    //judge
    if(KeyA.down()) judge(0);
    if(KeyS.down()) judge(1);
    if(KeyD.down()) judge(2);
    if(KeyF.down()) judge(3);
    if(KeyG.down()) judge(4);
    if(KeyH.down()) judge(5);
    if(KeyJ.down()) judge(6);
    if(KeyK.down()) judge(7);
    if(KeyL.down()) judge(8);
    if(KeySemicolon_US.down())  judge(9);
}

void Player::draw(){
    //判定レーン
    for(auto lane: plane){
        lane.draw();
    }
    //combo&score
    Print << U"combo:" << combo;
    Print << U"score:" << score;
}
