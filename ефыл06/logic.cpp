bool isLocalMaximum(int** matrix, int i, int j, int n, int m) {
	int current = matrix[i][j];
	if (i > 0 && matrix[i - 1][j] >= current ||
		i < n - 1 && matrix[i + 1][j] >= current ||
		j > 0 && matrix[i][j - 1] >= current ||
		j < m - 1 && matrix[i][j + 1] >= current) {
		return false;
	}
	else {
		return true;
	}
}

