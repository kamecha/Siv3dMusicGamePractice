//
//  Player.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#include "Player.hpp"

void Player::update(){
    //判定レーン
    for(int i = 0; i < plane.size(); i++){
        plane[i].lane = i;
        plane[i].lpos = Vec2(Window::ClientWidth()/12*(i+1), Window::ClientHeight()/5*4);
        plane[i].width = Window::ClientWidth()/12;
        plane[i].height = 5;
    }
}

void Player::draw(){
    for(auto lane: plane){
        lane.draw();
    }
}
