#include <iostream>
using namespace std;
void find_last_local_minimum(int** matrix, int n, int m, int& row, int& col);
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

	int row, col;
	find_last_local_minimum(matrix, n, m, row, col);

	if (row == -1)
	{
		cout << "matrix has no local minimum" << endl;
	}
	else {
		cout << "The last local minimum contains coordinates ["
			<< row << ";" << col << "] and it matters "
			<< matrix[row - 1][col - 1] << "." << endl;
	}


	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}