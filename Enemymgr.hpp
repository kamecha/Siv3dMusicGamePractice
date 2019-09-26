#ifndef Enemymgr_hpp
#define Enemymgr_hpp

#include <Siv3D.hpp>
#include "Enemy.hpp"

class Enemymgr{
    private:
	std::vector<std::shared_ptr<Enemy>>enemies;
    public:
	Enemymgr(){}
	void add(Vec2 pos, Vec2 velocity = Vec2(0, 0), double radius = 3);
	void update();
	void draw();
};

#endif 
