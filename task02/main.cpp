#include <iostream>
using namespace std;
int calculate_sum(int** matrix, int n);

int main() {
	int n;
	int m;


	cout << "Input your size of matrix: ";
	cin >> n >> m;

	int** matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}
	int a, b;
	cout << "Input range of values: ";
	cin >> a >> b;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % (b - a + 1) + a;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	int result = calculate_sum(matrix, n);
	cout << "sum of elements: " << result;

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;

}