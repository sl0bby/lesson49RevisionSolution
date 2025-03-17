#include <iostream>
using namespace std;
int isLocalMaximum(int** matrix, int i, int j, int n, int m);
int main() {
	int n;
	int m;
	cout << "input your size of matrix: ";
	cin >> n >> m;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}
	int a, b;
	cout << "Input range of value elemets: ";
	cin >> a >> b;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % (b - a + 1) + a;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

		int minLocalMax = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; ++j)
			{
				if (isLocalMaximum(matrix, i , j, n, m)) {
					if (matrix[i][j] < minLocalMax) {
						minLocalMax = matrix[i][j];
					}
				}
			}
		}
		cout << "Min local maximum: " << minLocalMax;


	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;

}