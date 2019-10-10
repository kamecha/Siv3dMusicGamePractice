//
//  Enemy.hpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#ifndef Enemy_hpp
#define Enemy_hpp

#include <Siv3D.hpp>
#include "Note.hpp"

class Enemy{
    public:
        Vec2 pos;
        Vec2 velocity;

        Enemy(Vec2 pos, Vec2 velocity):pos(pos), velocity(velocity){}
        virtual ~Enemy(){}
        virtual Note noteupdate(Note note) = 0;
        virtual void update() = 0;
        virtual void draw() = 0;
};

class A:public Enemy{   //静止
    public:
        A(Vec2 pos, Vec2 velocity = Vec2(0, 0)):Enemy(pos, velocity){}
        ~A(){}
        Note noteupdate(Note note) override;
        void update() override;
        void draw() override;
};

class B:public Enemy{   //平行移動
    public:
        B(Vec2 pos, Vec2 velocity = Vec2(0, 0)):Enemy(pos, velocity){}
        ~B(){}
        Note noteupdate(Note note) override;
        void update() override;
        void draw() override;
};

#endif /* Enemy_hpp */
