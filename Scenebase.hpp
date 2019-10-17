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
        Scenebase(){}
        virtual ~Scenebase(){}
        virtual void update() = 0;
        virtual void draw() = 0;
};

class Title:public Scenebase{
    public:
        Title():Scenebase(){}
        ~Title(){}
        void update() override;
        void draw() override;
};

class Game:public Scenebase{
    public:
        Game():Scenebase(){}
        ~Game(){}
        void update() override;   
        void draw() override;   
};

#endif /* Scenebase_hpp */
