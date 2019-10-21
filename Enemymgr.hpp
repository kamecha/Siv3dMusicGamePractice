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
#include "Note.hpp"

class Enemymgr{
    public:
        std::vector<Enemy*>enemies;
        std::vector<Texture>etexture;
        std::vector<std::vector<Note>>notes;

        Enemymgr():notes(10){}
        ~Enemymgr(){
            for(int i = 0; i < enemies.size(); i++){
                delete enemies[i];
            }
        }
        void addenemy(Vec2 pos, int kind, int imagenum);
        void addnote(Note note);
        void update();
        void draw();
};

#endif /* Enemymgr_hpp */
