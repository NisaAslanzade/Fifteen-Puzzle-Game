#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;

void MainPuzzle(int array[4][4]) {
	int numeral = 1;

	cout << "\n       Main Puzzle: " << "\n\n";
	for (int i = 0; i < 4; i++) {
		cout << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197
			 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << "\n" << (char)179;
		for (int j = 0; j < 4; j++) {
			array[i][j] = numeral++;
			if (i == 3 && j == 3) cout << "  " << "\t" << (char)179;
			if (array[i][j] == 16) break;
			cout << array[i][j] << "\t" << (char)179;
		}
		cout << endl;
	}
	cout << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197
		 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << "\n";
}

void FindRepeatingDigit(int array[4][4]) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4;) {

			int digit = (rand() % 16) + 1;
			bool found = true;

			for (int ii = 0; ii <= i; ii++) {
				for (int jj = 0; jj < 4; jj++) {
					if (ii == i && jj == j) {
						break;
					}
					else if (array[ii][jj] == digit) {
						found = false;
						ii = i + 1;
						break;
					}
				}
			}
			if (found) {
				array[i][j] = digit;
				j++;
			}
		}
	}
}

void Upward(int array[4][4]) {
	int getX = 0, getY = 0;

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (array[i][j] == 16) {
				getX = j;
				getY = i;
			}
		}
	}

	if (getY != 0) {
		int swap = array[getY - 1][getX];
		array[getY - 1][getX] = 16;
		array[getY][getX] = swap;
		getY--;
	}
}

void Downward(int array[4][4]) {
	int getX = 0, getY = 0;

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (array[i][j] == 16) {
				getX = j;
				getY = i;
			}
		}
	}

	if (getY != 3) {
		int swap = array[getY + 1][getX];
		array[getY + 1][getX] = 16;
		array[getY][getX] = swap;
		getY++;
	}
}

void Leftward(int array[4][4]) {
	int getX = 0, getY = 0;

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (array[i][j] == 16) {
				getX = j;
				getY = i;
			}
		}
	}

	if (getX != 0) {
		int swap = array[getY][getX - 1];
		array[getY][getX - 1] = 16;
		array[getY][getX] = swap;
		getX--;
	}
}

void Rightward(int array[4][4]) {
	int getX = 0, getY = 0;

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (array[i][j] == 16) {
				getX = j;
				getY = i;
			}
		}
	}

	if (getX != 3) {
		int swap = array[getY][getX + 1];
		array[getY][getX + 1] = 16;
		array[getY][getX] = swap;
		getX++;
	}
}

bool CheckWin(int array[4][4]) {
	int counter = 1;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++, counter++) {
			if (array[i][j] != counter) {
				return false;
			}
		}
	}
	return true;
}

void PrintPuzzle(int array[4][4]) {
	cout << "\n      Fifteen Puzzle Game." << "\n\n";

	for (int i = 0; i < 4; i++) {
		cout << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197
			 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << "\n" << (char)179;
		for (int j = 0; j < 4; j++) {
			if (array[i][j] == 16) cout << "  " << "\t" << (char)179;
			else cout << array[i][j] << "\t" << (char)179;
		}
		cout << endl;
	}
	cout << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197
	     << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)196 << (char)197 << "\n";
}

void Command() {
	cout << "\n\tCommand: " << "\n\n";
	cout << "W/w - Up." << "\n";
	cout << "S/s - Down." << "\n";
	cout << "A/a - Left." << "\n";
	cout << "D/d - Right." << "\n";
	cout << "ESC - Quit." << "\n";
}

int main() {
	const int arraySize = 4;
	int mainBox[arraySize][arraySize], box[arraySize][arraySize];
	char userInput;

	srand(time(NULL));
	FindRepeatingDigit(box);

	while(true) {
		system("cls");
		MainPuzzle(mainBox);
		Command();
		PrintPuzzle(box);

		if (CheckWin(box)) {
			cout << "\n\n     CONGRATULATIONS!!!\n\tYOU WIN!!!" << "\n\n";
			break;
		}
		cout << "\n\n   Enter a Command"; userInput = _getch();
		
		switch (userInput) {
			case 'W':
			case 'w':
				Upward(box);
				break;
			case 'S':
			case 's':
				Downward(box);
				break;
			case 'A':
			case 'a':
				Leftward(box);
				break;
			case 'D':
			case 'd':
				Rightward(box);
				break;
			default:
				cout << "Error! Try it again." << "\n";
		}
	}
}