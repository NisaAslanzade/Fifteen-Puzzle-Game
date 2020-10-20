#include <iostream>
#include <time.h>
#include <conio.h>
using namespace std;

// Task 1
void Array(int array[4][4]) {
	srand(time(NULL));
	int numeral = 0;

	cout << "Array: " << "\n";
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			array[i][j] = numeral;
			numeral += 1;
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}


int main() {
	cout << "\tFifteen Puzzle Game." << "\n\n";

	// Написать игру «Пятнашки».

	int array[4][4];

	Array(array);
}