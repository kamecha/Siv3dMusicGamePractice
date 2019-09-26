#include "Enemy.hpp"

void EnemyA::update(){

}

void EnemyA::draw(){
    Circle(pos.x, pos.y, radius).draw(ColorF(1, 0, 0));
    for(int i = 0; i <= 10; i++){
	Line(pos, Window::ClientWidth()/10*i, Window::ClientHeight()).draw(3, ColorF(1, 0, 0));
    }
}
