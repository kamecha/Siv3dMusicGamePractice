#include <Siv3D.hpp>
#include "Gamemgr.hpp"

void Main(){
    while(System::Update()){
        gamemgr.update();
        gamemgr.draw();
    }
}
