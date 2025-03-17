int calculate_Exteme_Colums_Sum(int** matrix, int n, int m) {
	int minElement = matrix[0][0];
	int maxElement = matrix[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] < minElement)
			{
				minElement = matrix[i][j];
			}
			if (matrix[i][j] > maxElement)
			{
				maxElement = matrix[i][j];
			}
		}
	}
	int sum = 0;
	for (int j = 0; j < m; j++)
	{
		bool hasExtreme = false;
		for (int i = 0; i < n; i++)
		{
			if (matrix[i][j] == minElement || matrix[i][j] == maxElement) {
				hasExtreme = true;
				break;
			}
		}
		if (hasExtreme)
		{
			for (int i = 0; i < n; i++) {
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}