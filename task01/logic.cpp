double calculate_arithmetic_mean(int** matrix, int x, int y) {
	double sum = 0;
	double count = 0;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++) {
			if (matrix[i][j] != 0)
			{
				sum += matrix[i][j];
				count++;
			}
		}
	}
	return sum / count;
}