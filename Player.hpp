//
//  Player.hpp
//  empty
//
//  Created by masaki kameyama on 2019/10/09.
//

#ifndef Player_hpp
#define Player_hpp

#include <Siv3D.hpp>

class Plane{
    public:
        int lane;   //0~9
        Vec2 lpos;  //左上の座標
        int width;
        int height;
        Plane(Vec2 lpos, int width, int height):lpos(lpos), width(width), height(height){}
        Plane(){}
        void draw(){
            if(lane == 3 || lane == 6){
                Rect(lpos.x, lpos.y, width, height).draw(ColorF(0.8, 0.8, 0, 0.8)); //F,J
            }else{
                Rect(lpos.x, lpos.y, width, height).draw(ColorF(0.8, 0, 0, 0.8));
            }
        }
};

class Player{
    private:
        std::vector<Plane>plane;
    public:
        int combo;
        int score;

        Player():plane(10), combo(0), score(0){ }
        Plane getplane(int i){return plane[i];}     //iの判定レーン情報
        void judge(int lane);
        void update();
        void draw();
};

#endif /* Player_hpp */
