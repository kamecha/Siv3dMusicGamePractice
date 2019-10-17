//
//  Scenemgr.hpp
//  empty
//
//  Created by masaki kameyama on 2019/10/16.
//

#ifndef Scenemgr_hpp
#define Scenemgr_hpp

#include <Siv3D.hpp>
#include "Scenebase.hpp"

class Scenemgr{
    public:
        std::stack<Scenebase*>scene;

        Scenemgr(){}
        ~Scenemgr(){
            while(!scene.empty()){
                sdelete();
            }
        }
        void sdelete();
        void update();
        void draw();
};

#endif /* Scenemgr_hpp */
