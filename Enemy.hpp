#ifndef Enemy_hpp
#define Enemy_hpp

#include <Siv3D.hpp>
#include "Notes.hpp"

class Enemy{
    protected:
	Vec2 pos;
	Vec2 velocity;
	std::vector<std::shared_ptr<Notes>>notes;
    public:
	Enemy(Vec2 pos, Vec2 velocity){
	    this->pos = pos;
	    this->velocity = velocity;
	}
	virtual ~Enemy(){}
	Vec2 getpos(){
	    return pos;
	}
	virtual void update()=0;
	virtual void draw()=0;
};

class EnemyA:public Enemy{  //静止
    private:
	double radius;
    public:
	EnemyA(Vec2 pos, Vec2 velocity = Vec2(0, 0),  double radius = 5):Enemy(pos, velocity), radius(radius){}
	~EnemyA(){}
	void update() override;	
	void draw() override;	
};
#endif /* Enemy_hpp */
