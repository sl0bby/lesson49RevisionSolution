#include <iostream>
using namespace std;
int calculate_Exteme_Colums_Sum(int** matrix, int n, int m);
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
	int result = calculate_Exteme_Colums_Sum(matrix, n, m);
	cout << "sum of coloums with exteme elements: " << result << endl;

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}