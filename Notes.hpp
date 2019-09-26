#ifndef Notes_hpp
#define Notes_hpp

#include <Siv3D.hpp>

class Notes{
    protected:
	Vec2 pos;
	Vec2 velocity;
    public:
	Notes(Vec2 pos, Vec2 velocity){
	    this->pos = pos;
	    this->velocity = velocity;
	}
	virtual ~Notes(){}
	virtual void update()=0;
	virtual void draw()=0;
};

class NotesA:public Notes{  //横線のノーツ
    private:
	double length;
	int width;
    public:
	NotesA(Vec2 pos, Vec2 velocity, double length, int width):Notes(pos, velocity),length(length),width(width){}
	~NotesA(){}
	void update() override;
	void draw() override;
};

#endif 
