#ifndef Player_hpp
#define Player_hpp

#include <Siv3D.hpp>

class Player{
    private:
	int zanki;
	int score;
	int combo;
    public:
	Player():zanki(100), score(0), combo(0){}
	void changezanki();
	void update();
	void draw();
};

#endif 
