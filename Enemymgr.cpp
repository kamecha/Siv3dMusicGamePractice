//
//  Enemymgr.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#include "Enemymgr.hpp"

void Enemymgr::addenemy(Vec2 pos, int kind){
    switch(kind){
        case 0:
            enemies.push_back(new A(pos));
            break;
        case 1:
            enemies.push_back(new B(pos));
            break;
    }
}

void Enemymgr::update(){
    for(auto enemy: enemies){
        enemy->update();
    }
}

void Enemymgr::draw(){
    for(auto enemy: enemies){
        enemy->draw();
    }
}
