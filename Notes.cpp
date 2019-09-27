#include "Notes.hpp"

void NotesA::update(Vec2 lpos, Vec2 rpos){
    this->lpos = lpos;
    this->rpos = rpos;
    timer++;
}

void NotesA::draw(){
    Line(lpos.x, lpos.y, rpos.x, rpos.y).draw(width, ColorF(0, 1, 0));
}
