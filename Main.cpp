# include <Siv3D.hpp> // OpenSiv3D v0.4.0
#include "Gamemgr.hpp"

void Main(){
    while(System::Update()){
	gamemgr.update();
	gamemgr.draw();
    }
}
