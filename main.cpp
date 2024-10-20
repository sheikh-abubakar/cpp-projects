#include "utility.h"
#include <iostream>
#include <fstream>
#include<string>
using namespace std;

class Maze {
private:
	int rows;
	int cols;

public:
	Maze() {
		rows = 0;
		cols = 0;

	}
	int getRows() {
		return rows;

	}
	int getCols() {
		return cols;
	}

	void printMaze() {
		ifstream mazeFile;
		mazeFile.open("maze.txt");
		if (!mazeFile.is_open()) {
			cout << "unable to open maze file !";
			return;
		}
		string Ch;
		int y = 0;//rows(y-coord)

		//each line represnt rows 
		//length of each line represnt col
		while (getline(mazeFile, Ch)) {
			cols = Ch.length();
			for (int x = 0; x < cols; ++x) {
				setCursorAt(x, y);
				if (Ch[x] == '1') {
					SetColor(dark_red, dark_red);
				}
				if (Ch[x] == '0') {
					SetColor(0, 0);
				}
				else {
					SetColor(15, 0);
				}

				cout << Ch[x];
				SetColor(15, 0);
			}
			y++;//next row

		}
		rows = y;
		mazeFile.close();

	}

};

int main() {
	Maze maze;
	maze.printMaze();
	int r = maze.getRows();
	int c = maze.getCols();
	return 0;
}