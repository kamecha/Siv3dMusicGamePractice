//
//  Enemy.hpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#ifndef Enemy_hpp
#define Enemy_hpp

#include <Siv3D.hpp>

class Enemy{
    protected:
        Vec2 pos;
        Vec2 velocity;
    public:
        Enemy(Vec2 pos, Vec2 velocity):pos(pos), velocity(velocity){}
        virtual ~Enemy(){}
        virtual void update() = 0;
        virtual void draw() = 0;
};

class A:public Enemy{   //静止
    public:
        A(Vec2 pos, Vec2 velocity = Vec2(0, 0)):Enemy(pos, velocity){}
        ~A(){}
        void update() override;
        void draw() override;
};

class B:public Enemy{   //平行移動
    public:
        B(Vec2 pos, Vec2 velocity = Vec2(0, 0)):Enemy(pos, velocity){}
        ~B(){}
        void update() override;
        void draw() override;
};

#endif /* Enemy_hpp */
