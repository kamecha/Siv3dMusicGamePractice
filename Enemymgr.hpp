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
    public:
	Enemymgr(){}
	void add(Vec2 pos, Vec2 velocity = Vec2(0, 0));
	void update();
	void draw();
};

#endif 
