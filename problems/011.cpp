#include <bits/stdc++.h>

#define SIZE 20

int main(){
	int matrix[SIZE][SIZE];
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			std::cin >> matrix[i][j];

	unsigned int best = 0;
	for (int row = 0; row < SIZE; row++)
		for (int column = 0; column < SIZE; column++) {
			// LEFT -> RIGHT
			if (column + 3 < SIZE) {
				unsigned int current = matrix[row][column] * matrix[row][column+1] * matrix[row][column+2] * matrix[row][column+3];
				if (current > best) best = current;
			}
			// UP -> DOWN
			if (row + 3 < SIZE) {
				unsigned int current = matrix[row][column] * matrix[row+1][column] * matrix[row+2][column] * matrix[row+3][column];
				if (current > best) best = current;
			}

			// DIAGONAL (RIGHT-DOWN)
			if ((row + 3 < SIZE) && (column + 3 < SIZE)) {
				unsigned int current = matrix[row][column] * matrix[row+1][column+1] * matrix[row+2][column+2] * matrix[row+3][column+3];
				if (current > best) best = current;
			}
			// DIAGONAL (LEFT-DOWN)
			if ((row + 3 < SIZE) && (column - 3 >= 0)) {
				unsigned int current = matrix[row][column] * matrix[row+1][column-1] * matrix[row+2][column-2] * matrix[row+3][column-3];
				if (current > best) best = current;
			}
		}

	std::cout << best << std::endl;
	return 0;
}
