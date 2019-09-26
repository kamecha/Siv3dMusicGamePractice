#include "Notes.hpp"

void NotesA::update(){
    pos += velocity;
}

void NotesA::draw(){
    Line(pos.x, pos.y, pos.x+length, pos.y).draw(width, Color(0, 0, 0));
}
