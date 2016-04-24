#include <iostream>
#include "mazeGame.h"
using namespace std;

int main() {
	cout << "Please input the size of maze: no larger than 15" << endl;
	cin >> size;
	initMaze();
	print_state();

	//input the direction for move:u: up, d:down, l:left, r:right.
	char operation;
	while(true){
		cin >> operation;
		try
		{
			switch(operation){
			case 'u':
				move(row-1,col);
				break;
			case 'd':
				move(row+1,col);
				break;
			case 'l':
				move(row,col-1);
				break;
			case 'r':
				move(row,col+1);
				break;
			default:
				throw "move error!";
			}
		}
		catch(int i){
		    if(i == 1){
			    cout << "Arived EXIT!" <<endl;
			    return 0;
		    }
		    if(i == 2){
		    	cout << "Hit the wall, Game Over!" << endl;
		    	return 0;
		    }
		}
		print_state();
	}
	return 0;
}
