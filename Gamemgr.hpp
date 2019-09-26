#ifndef Gamemgr_hpp
#define Gamemgr_hpp

#include <Siv3D.hpp>
#include "Enemymgr.hpp"

class Gamemgr{
    private:
	int timer;
	Enemymgr enemymgr;
    public:
	Gamemgr():timer(0){}
	void update();
	void draw();
};

#endif 
