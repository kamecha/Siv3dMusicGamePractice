//
//  Gamemgr.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#include "Gamemgr.hpp"

void Gamemgr::update(){
    player.update();
}

void Gamemgr::draw(){
    player.draw();
}

Gamemgr gamemgr;
