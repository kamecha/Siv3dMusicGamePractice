#ifndef Gamemgr_hpp
#define Gamemgr_hpp

#include <Siv3D.hpp>
#include "Enemymgr.hpp"
#include "Player.hpp"

class Gamemgr{
    private:
	int timer;
	Enemymgr enemymgr;
	Player player;
	bool debug;	//debugモードtrue:様々な情報の閲覧
    public:
	Gamemgr():timer(0), debug(false){}
	bool debugmode(){return debug;}
	void changemode() {debug = !debug;}
	void changezanki()  {player.changezanki();}
	int gettime(){return timer;}
	void addnotes(int timer, int line) {enemymgr.addnotes(timer, line);}
	void update();
	void draw();
};

extern Gamemgr gamemgr;

#endif 
