//
//  Scenebase.hpp
//  empty
//
//  Created by masaki kameyama on 2019/10/15.
//

#ifndef Scenebase_hpp
#define Scenebase_hpp

#include <Siv3D.hpp>

class Scenebase{
    public:
        int kind;

        Scenebase(int kind):kind(kind){}
        virtual ~Scenebase(){}
        virtual void update() = 0;
        virtual void draw() = 0;
};

class Title:public Scenebase{
    public:
        Title(int kind):Scenebase(kind){}
        ~Title(){}
        void update() override;
        void draw() override;
};

class Game:public Scenebase{
    public:
        Game(int kind):Scenebase(kind){}
        ~Game(){}
        void update() override;   
        void draw() override;   
};

#endif /* Scenebase_hpp */
