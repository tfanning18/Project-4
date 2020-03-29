/**
 * Copyright 2019 University of Michigan EECS183
 *
 * Position.cpp
 * Project UID 8885f2d9f10d2f99bc099aa9c3fc0543
 *
 * Tom Fanning
 * tfanning
 *
 * Project 4: Battleship
 *
 * Battleship lab
 */

#include "Position.h"
#include "utility.h"


Position::Position() {
    row = 0;
    col = 0;
}

Position::Position(int row_in, int col_in) {
    row = check_range(row_in);
    col = check_range(col_in);
   
}

Position::Position(char row_in, char col_in) {
    col_in = toupper(col_in);
    int numRows = (int)row_in - 49;
    int numCols = (int)col_in - 65;
    row = check_range(numRows);
    col = check_range(numCols);
}

int Position::get_row() {
    
    return row;
}

void Position::set_row(int row_in) {
    row = check_range(row_in);
    return;
}

int Position::get_col() {
    return col;
}

void Position::set_col(int col_in) {
    col = check_range(col_in);
    return;
}

void Position::read(istream &is) {
    char openParentheses;
    char closeParentheses;
    char comma;
    char input;
    is >> row >> input;
    if(is.fail()) {
        is.clear();
        is >> openParentheses >> row >> comma >> input >> closeParentheses;
    }
    col = toupper(input) - 65;
    row = row - 1;
    col = check_range(col);
    row = check_range(row);
    return;
}


void Position::write(ostream &os) {
    char letter = (char) col + 'A';
    row = row + 1;
    os << '(' << row << ',';
    os << letter << ')';
    return;
}

int Position::check_range(int val) {
    if(val >= 0 && val < MAX_GRID_SIZE) {
        return val;
    }
    else if (val <= 0) {
        return 0;
    }
    else {
        return MAX_GRID_SIZE - 1;
    }
}


// Your code goes above this line.
// Don't change the implementations below!

istream &operator>>(istream &is,  Position &pos) {
    pos.read(is);
    return is;
}

ostream &operator<<(ostream &os, Position pos) {
    pos.write(os);
    return os;
}

