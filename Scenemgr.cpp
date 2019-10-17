//
//  Scenemgr.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/16.
//

#include "Scenemgr.hpp"

void Scenemgr::sdelete(){
    if(!scene.empty()){
        delete scene.top();
        scene.pop();
    }
}

void Scenemgr::update(){
    switch(scene.top()->kind){
        case 0:
            if(KeyEnter.down()){
                scene.push(new Game(1));
            }
            break;
        case 1:
            if(KeyEnter.down()){
                sdelete();
            }
            break;
        default:
            break;
    }
    if(!scene.empty()){
        scene.top()->update();
    }
}

void Scenemgr::draw(){
    if(!scene.empty()){
        scene.top()->draw();
    }
}
