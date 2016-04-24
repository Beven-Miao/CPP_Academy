#ifndef MAZEGAME_H
#define MAZEGAME_H

extern int row;
extern int col;
extern int size;
extern int maze[15][15];

void initMaze();
void print_state();
void move(int row, int col);


#endif
