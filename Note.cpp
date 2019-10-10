//
//  Note.cpp
//  empty
//
//  Created by masaki kameyama on 2019/10/10.
//

#include "Note.hpp"

void Note::update(){}

void Note::draw(){
    Rect(lpos.x, lpos.y, width, height).draw(ColorF(1, 0.5, 0, 0.9));
}
