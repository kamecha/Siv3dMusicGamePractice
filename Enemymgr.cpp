#include "Enemymgr.hpp"

void Enemymgr::add(Vec2 pos, Vec2 velocity, double radius){
    enemies.push_back(std::make_shared<EnemyA>(pos, velocity, radius));
}

void Enemymgr::update(){
    //敵削除
    auto it = enemies.begin();
    while(it != enemies.end()){
	Vec2 pos = (*it)->getpos();
	if(pos.x < 0 || pos.x > Window::ClientWidth() || pos.y < 0 || pos.y > Window::ClientHeight()){
	    it = enemies.erase(it);
	}else{
	    it++;
	}	
    }
    //敵処理
    for(auto& enemy: enemies){
	enemy->update();
    }
}

void Enemymgr::draw(){
    //敵描画
    for(auto& enemy: enemies){
	enemy->draw();
    }
}
