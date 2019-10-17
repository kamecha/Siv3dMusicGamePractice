//
//  Gamemgr.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#include "Gamemgr.hpp"
#include "Note.hpp"

void Gamemgr::update(){
    Fumen front = fumen.front();
    if(front.time == time){
        switch(front.flag){
            case 0: //敵
                switch(front.ex){   //敵のx座標
                    case 0:
                        front.pos.x = 0;
                        break;
                    case 1:
                        front.pos.x = Window::ClientWidth();
                        break;
                    case 2:
                        front.pos.x = Window::ClientWidth()/2;
                        break;
                    case 3:
                        front.pos.x = Random<int>(0, Window::ClientWidth());
                        break;
                }
                switch(front.ey){   //敵のy座標
                    case 0:
                        front.pos.y = 0;
                        break;
                    case 1:
                        front.pos.y = Window::ClientHeight()/4;
                        break;
                    case 2:
                        front.pos.y = Window::ClientHeight()/2;
                        break;
                    case 3:
                        front.pos.y = Random<int>(0, Window::ClientHeight()/2);
                        break;
                }
                enemymgr.addenemy(front.pos, front.ekind, 0);
                break;
            case 1: //ノーツ
                Vec2 epos = enemymgr.enemies[front.enote]->pos;
                enemymgr.addnote(Note(epos, 0, 3, front.lane, front.enote));
                break;
        }
        fumen.pop();
    }
    //メンバのupdate
    player.update();
    enemymgr.update();
    time++;
}

void Gamemgr::draw(){
    ClearPrint();
    if(debug)   Print << U"time" << time;
    player.draw();
    enemymgr.draw();
}

Gamemgr gamemgr;
