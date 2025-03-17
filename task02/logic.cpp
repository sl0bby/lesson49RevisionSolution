int calculate_sum(int** matrix, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][i];
		sum += matrix[i][n - i - 1];
	}
	if (n % 2 == 1) {
		sum -= matrix[n / 2][n / 2];
	}
	return sum;
}