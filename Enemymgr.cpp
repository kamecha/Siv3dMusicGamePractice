//
//  Enemymgr.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#include "Enemymgr.hpp"
#include "Gamemgr.hpp"

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

void Enemymgr::addnote(Note note){
    notes[note.lane].push_back(note);
}

void Enemymgr::update(){
    //敵
    for(auto enemy: enemies){
        enemy->update();
    }
    //ノーツ
    for(int lane = 0; lane < notes.size(); lane++){ //位置変更
        for(int note = 0; note < notes[lane].size(); note++){
            notes[lane][note] = enemies[notes[lane][note].enemy]->noteupdate(notes[lane][note]);
        }
    }
    //ノーツ削除
    for(int lane = 0; lane < notes.size(); lane++){
        auto it = notes[lane].begin();
        while(it!=notes[lane].end()){
            if(it->exit == false || it->lpos.y > Window::ClientHeight()){
                it = notes[lane].erase(it);
                gamemgr.player.combo = 0;
            }else{
                it++;
            }
        }
    }
}

void Enemymgr::draw(){
    //敵
    for(auto enemy: enemies){
        enemy->draw();
    }
    //ノーツ
    for(int lane = 0; lane < notes.size(); lane++){
        for(int note = 0; note < notes[lane].size(); note++){
            notes[lane][note].draw();
        }
    }
    //debug
    if(gamemgr.debug){
        Print << U"enemies:" << enemies.size();
        for(int lane = 0; lane < notes.size(); lane++){
            Print << U"notes[" << lane << U"]:" << notes[lane].size();
        }
    }
}
