//
//  Scene.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/15.
//

#include "Scenebase.hpp"
#include "Gamemgr.hpp"

void Title::update(){
    //something
}

void Title::draw(){
    Print << U"Title画面だよ！";
    Print << U"キーボード選択をするつもりだよ";
}

void Game::update(){
    gamemgr.update();
}

void Game::draw(){
    gamemgr.draw();
}
