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
#include "Enemymgr.hpp"
#include <queue>

struct Fumen{
    int time;
    int flag;   //敵かノーツ
    int ekind;  //敵種類
    Vec2 pos;   //敵位置
    int ex;
    int ey;
    int enote;  //どの敵がノーツを持っているか
    int lane;   //ノーツがあるレーン
    Fumen(int time, int flag, int ekind, int ex, int ey, int enote, int lane):time(time), flag(flag), ekind(ekind), ex(ex), ey(ey), enote(enote), lane(lane){}
    void draw(){
        Print << U"time:" << time;
        Print << U"flag:" << flag;
        Print << U"lane:" << lane;
    }
};

class Gamemgr{
    public:
        int time;
        Player player;
        Enemymgr enemymgr;
        std::queue<Fumen>fumen;
        bool debug;

        Gamemgr():time(0), debug(true){}
        void update();
        void draw();
};

extern Gamemgr gamemgr;

#endif /* Gamemgr_hpp */
