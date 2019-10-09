//
//  Gamemgr.hpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#ifndef Gamemgr_hpp
#define Gamemgr_hpp

#include <Siv3D.hpp>
#include "Player.hpp"

class Gamemgr{
    private:
        Player player;
    public:
        void update();
        void draw();
};

extern Gamemgr gamemgr;

#endif /* Gamemgr_hpp */
