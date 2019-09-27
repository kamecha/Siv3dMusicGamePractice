#ifndef Notes_hpp
#define Notes_hpp

#include <Siv3D.hpp>

class Notes{
    protected:
	int timer;
	int lane;   //notesが位置するレーン0~9
	bool exit;  //true:存在する
	Vec2 lpos;
	Vec2 rpos;
	Vec2 velocity;
    public:
	Notes(int lane, Vec2 lpos, Vec2 rpos, Vec2 velocity):timer(0), lane(lane), exit(true), lpos(lpos), rpos(rpos), velocity(velocity){}
	virtual ~Notes(){}
	int getlane(){return lane;}
	bool getexit(){return exit;}
	Vec2 getlpos(){return lpos;}
	Vec2 getrpos(){return rpos;}
	Vec2 getvelocity(){return velocity;}
	virtual void update(Vec2 lpos, Vec2 rpos)=0;
	virtual void draw()=0;
};

class NotesA:public Notes{  //横線のノーツ
    private:
	int width;
    public:
	NotesA(int lane, Vec2 lpos, Vec2 rpos, Vec2 velocity = Vec2(0, 5)):Notes(lane, lpos, rpos, velocity), width(3){}
	~NotesA(){}
	void update(Vec2 lpos, Vec2 rpos) override;
	void draw() override;
};

#endif 
