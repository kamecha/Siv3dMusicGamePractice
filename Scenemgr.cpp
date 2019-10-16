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
    /*
    if(scene.empty()){
        scene.push(new Title);
    }
    */
    if(!scene.empty()){
        scene.top()->update();
    }
}

void Scenemgr::draw(){
    if(!scene.empty()){
        scene.top()->draw();
    }
}
