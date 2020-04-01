/**
 * Copyright 2019 University of Michigan EECS183
 *
 * Ship.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * Tom Fanning
 * tfanning
 *
 * Project 4: Battleship
 *
 * <#description#>
 */

#include <cmath>

#include "Ship.h"


Ship::Ship() {
    start = Position();
    end = Position();
    num_hits = 0;
    size = 0;
}

Ship::Ship(Position start_in, Position end_in) {
    
}

Position Ship::get_start() {
    return start;
}

Position Ship::get_end() {
    return end;
}

int Ship::get_size() {
    return size;
}

bool Ship::is_horizontal() {
    if(start.get_row() == end.get_row()) {
        return true;
    }
    else {
        return false;
    }
}

bool Ship::has_position(Position pos) {
    if(is_horizontal()) {
        if(pos.get_row() == start.get_row()) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

void Ship::hit() {
    while(size > num_hits) {
        num_hits++;
    }
    return;
}

bool Ship::has_sunk() {
    if(num_hits == size) {
        return true;
    }
    else {
    return false;
    }
}
