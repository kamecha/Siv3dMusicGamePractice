//
//  Enemymgr.hpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#ifndef Enemymgr_hpp
#define Enemymgr_hpp

#include <Siv3D.hpp>
#include "Enemy.hpp"

class Enemymgr{
    private:
        std::vector<Enemy*>enemies;
    public:
        ~Enemymgr(){
            for(int i = 0; i < enemies.size(); i++){
                delete enemies[i];
            }
        }
        void addenemy(Vec2 pos, int kind);
        void update();
        void draw();
};

#endif /* Enemymgr_hpp */
