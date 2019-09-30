#ifndef Enemymgr_hpp
#define Enemymgr_hpp

#include <Siv3D.hpp>
#include "Enemy.hpp"
#include <queue>

class Lane{
public:
    int time;
    int line;
    Lane(int time, int line):time(time), line(line){}
};

class Enemymgr{
    private:
	std::vector<std::shared_ptr<Enemy>>enemies;
	std::queue<Lane>notestime;   //ノーツの到着時刻
    public:
	Enemymgr(){}
	void add(Vec2 pos, Vec2 velocity = Vec2(0, 0), double radius = 3);
	void addnotes(int time, int line);    //ノーツの発現時刻から到着時刻を割り出す
	void update();
	void draw();
};

#endif 
