#ifndef Player_hpp
#define Player_hpp

#include <Siv3D.hpp>

class Plane{
public:
    Vec2 lpos;
    int width;
    int height;
    void draw(){
	Rect(lpos.x, lpos.y, width, height).draw(ColorF(1, 0.5, 0, 0.8));
    }
};

class Player{
    private:
	int zanki;
	int score;
	int combo;
	std::vector<Plane>plane;
    public:
	Player():zanki(100), score(0), combo(0), plane(10){
	    for(int i = 0; i < 10; i++){
		plane[i].lpos = Vec2(Window::ClientWidth()/12*(1+i), Window::ClientHeight()/5*4);
		plane[i].width = Window::ClientWidth()/12;
		plane[i].height = 3;
	    }
	}
	void changezanki();
	void update();
	void draw();
};

#endif 
