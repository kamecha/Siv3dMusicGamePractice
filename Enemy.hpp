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
        Texture image;
        Vec2 pos;
        Vec2 velocity;

        Enemy(Texture image,Vec2 pos, Vec2 velocity):image(image), pos(pos), velocity(velocity){}
        virtual ~Enemy(){}
        virtual Note noteupdate(Note note) = 0;
        virtual void update() = 0;
        virtual void draw() = 0;
};

class A:public Enemy{   //静止
    public:
        A(Texture image, Vec2 pos, Vec2 velocity = Vec2(0, 0)):Enemy(image, pos, velocity){}
        ~A(){}
        Note noteupdate(Note note) override;
        void update() override;
        void draw() override;
};

class B:public Enemy{   //平行移動
    public:
        B(Texture image, Vec2 pos, Vec2 velocity = Vec2(0, 0)):Enemy(image, pos, velocity){}
        ~B(){}
        Note noteupdate(Note note) override;
        void update() override;
        void draw() override;
};

#endif /* Enemy_hpp */
