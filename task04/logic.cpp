#include <iostream>
using namespace std;

int calculateColumnSumWithExtremes(int** matrix, int n, int m) {
	int maxElement = matrix[0][0];
	int minElement = matrix[0][0];

	bool* hasExtreme = false;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			maxElement = max(maxElement, matrix[i][j]);
			minElement = min(minElement, matrix[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] == maxElement || matrix[i][j] == minElement) {
				hasExtreme[j] = true;
			}
		}
	}

	int columnSum = 0;
	for (int j = 0; j < m; j++) {
		if (hasExtreme[j]) {
			for (int i = 0; i < n; i++) {
				columnSum += matrix[i][j];
			}
		}
	}

	return columnSum;
}