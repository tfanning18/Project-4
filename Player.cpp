/**
 * Copyright 2019 University of Michigan EECS183
 *
 * Player.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * Tom Fanning
 * tfanning
 *
 * Project 4: Battleship
 *
 * <#description#>
 */

#include <fstream>

#include "Player.h"


Player::Player() {
    Player();
    name = "";
    num_ships = 0;
    remaining_ships = 0;
    init_grid();
}

Player::Player(string name_val) {
    name = name_val;
    num_ships = 0;
    remaining_ships = 0;
    init_grid();
}

void Player::init_grid() {
    grid[MAX_GRID_SIZE][MAX_GRID_SIZE - 1] = EMPTY_LETTER;
    guess_grid [MAX_GRID_SIZE][MAX_GRID_SIZE - 1] = EMPTY_LETTER;
}

string Player::get_name() {
    return name;
}

int Player::get_num_ships() {
    return num_ships;
}

int Player::get_remaining_ships() {
    return remaining_ships;
}

char Player::get_grid_at(int row, int col) {
    return grid[row][col];
}

char Player::get_guess_grid_at(int row, int col) {
    return guess_grid[row][col];
}

void Player::add_ship(Ship ship) {
    int totalShips = 0;
    for(int i = 0; i < MAX_NUM_SHIPS; i++) {
        totalShips += 1;
        remaining_ships--;
        num_ships ++;
        SHIP_LETTER[start_in][end_in];
    }
    }

bool Player::position_not_hit(Position pos) {
    if(grid[MAX_GRID_SIZE][MAX_GRID_SIZE - 1] == EMPTY_LETTER || grid[MAX_GRID_SIZE][MAX_GRID_SIZE - 1] == SHIP_LETTER) {
        return true;
    }
    else {
        return false;
    }
}

void Player::attack(Player &opponent, Position pos) {
    if(position_not_hit(pos)) {
        
    }
        
        )
}

void Player::announce_ship_sunk(int size) {
    // TODO: write implementation here.
    return;
}

bool Player::load_grid_file(string filename) {
    // TODO: write implementation here.
    return false;
}

bool Player::destroyed() {
    if(remaining_ships == 0) {
        return true;
    }
    else {
        return false;
    }
}

// Your code goes above this line.
// Don't change the implementations below!

void Player::print_grid() {
    ::print_grid(grid);
}

void Player::print_guess_grid() {
    ::print_grid(guess_grid);
}
