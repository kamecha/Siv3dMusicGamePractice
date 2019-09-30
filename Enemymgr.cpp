#include "Enemymgr.hpp"
#include "Gamemgr.hpp"

void Enemymgr::add(Vec2 pos, Vec2 velocity, double radius){
    enemies.push_back(std::make_shared<EnemyA>(pos, velocity, radius));
}

void Enemymgr::addnotes(int time, int line){
    notestime.push(Lane(time, line));
}

void Enemymgr::update(){
    //敵削除
    auto it = enemies.begin();
    while(it != enemies.end()){
	Vec2 pos = (*it)->getpos();
	if(pos.x < 0 || pos.x > Window::ClientWidth() || pos.y > Window::ClientHeight()){
	    it = enemies.erase(it);
	}else{
	    it++;
	}	
    }
    //敵処理
    for(auto& enemy: enemies){
	enemy->update();
    }
    //ノーツ時間処理
    if(!notestime.empty()){
	if(gamemgr.gettime() > notestime.front().time + 10){
	    notestime.pop();
	}
    }
}

void Enemymgr::draw(){
    //敵描画
    for(auto& enemy: enemies){
	enemy->draw();
    }
    //debug
    if(gamemgr.debugmode()){
	Print << U"敵の数:" << enemies.size();
	Print << U"notestime:" << notestime.front().time;
    }
}
