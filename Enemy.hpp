#ifndef Enemy_hpp
#define Enemy_hpp

#include <Siv3D.hpp>
#include "Notes.hpp"

class Enemy{
    protected:
	int timer;
	Vec2 pos;
	Vec2 velocity;
    public:
	Enemy(Vec2 pos, Vec2 velocity):timer(0), pos(pos), velocity(velocity){}
	virtual ~Enemy(){}
	virtual void update()=0;
	virtual void draw()=0;
};

class EnemyA:public Enemy{  //静止
    private:
    public:
	EnemyA(Vec2 pos, Vec2 velocity = Vec2(0, 0)):Enemy(pos, velocity){}
	~EnemyA(){}
	void update() override;	
	void draw() override;	
};
#endif /* Enemy_hpp */
