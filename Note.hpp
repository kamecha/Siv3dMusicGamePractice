//
//  Note.hpp
//  empty
//
//  Created by masaki kameyama on 2019/10/10.
//

#ifndef Note_hpp
#define Note_hpp

#include <Siv3D.hpp>

class Note{
    public:
        Vec2 lpos;
        int width;
        int height;
        int lane;
        int enemy;      //どの敵が持ってるか
        int speed;      //落ちる速度
        bool exit;      //存在フラグ

        Note(Vec2 lpos, int width, int height, int lane, int enemy):lpos(lpos), width(width), height(height), lane(lane), enemy(enemy), speed(1), exit(true){}
        ~Note(){}
        void update();
        void draw();
};

#endif /* Note_hpp */
