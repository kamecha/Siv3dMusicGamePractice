#include "Enemy.hpp"
#include "Gamemgr.hpp"

void EnemyA::update(){
    //ノーツ追加
    if(timer%20 == 0 || timer%55 == 0){
	int line = Random(0, 9);
	notes.push_back(std::make_shared<NotesA>(line, pos, pos));
	int time = timer + (Window::ClientHeight()/5*4 - pos.y)/5;    //timerから到着時刻の計算
	gamemgr.addnotes(time, line);
    }
    //ノーツ制御
    for(auto& note: notes){
	for(int i = 0; i < 10; i++){
	    double lX = Window::ClientWidth()/10*i;
	    double rX = Window::ClientWidth()/10*(i+1);
	    double Y = Window::ClientHeight();
	    Vec2 beforelpos = note->getlpos();
	    Vec2 beforerpos = note->getrpos();
	    Vec2 beforevelocity = note->getvelocity();
	    Vec2 lpos = Vec2(pos.x + (pos.x - lX)*(beforelpos.y + beforevelocity.y - pos.y)/(pos.y - Y), beforelpos.y + beforevelocity.y);
	    Vec2 rpos = Vec2(pos.x + (pos.x - rX)*(beforerpos.y + beforevelocity.y - pos.y)/(pos.y - Y), beforerpos.y + beforevelocity.y);
	    if(note->getlane() == i){
		note->update(lpos, rpos);
	    }
	}
    }
    //ノーツ削除
    auto it = notes.begin();
    while(it != notes.end()){
	Vec2 pos = (*it)->getlpos();
	if(pos.x < 0 || pos.x > Window::ClientWidth() || pos.y > Window::ClientHeight() || !(*it)->getexit()){
	    it = notes.erase(it);
	    gamemgr.changezanki();
	}else{
	    it++;
	}	
    }
    //timer
    timer++;
}

void EnemyA::draw(){
    //敵本体の表示
    Circle(pos.x, pos.y, radius).draw(Color(1, 0, 0));
    //レーンの表示
    for(int i = 0; i <= 10; i++){
	Line(pos, Window::ClientWidth()/10*i, Window::ClientHeight()).draw(3, ColorF(1, 0, 0, 0.5));
    }
    //ノーツの表示
    for(auto& note: notes){
	note->draw();
    }
    //debug
    if(gamemgr.debugmode()){
	Print << U"ノーツの数:" << notes.size();
    }
}
