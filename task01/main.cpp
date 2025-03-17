#include <iostream>
using namespace std;
double calculate_arithmetic_mean(int** matrix, int x, int y);
int main() {
	int x;
	int y;
	cout << "input your size of matrix: ";
	cin >> x >> y;
	int** matrix = new int* [x];
	for (int i = 0; i < x; i++) {
		matrix[i] = new int[y];
	}
	int a, b;
	cout << "Input range of value elemets: ";
	cin >> a >> b;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++) {
			matrix[i][j] = rand() % (b - a + 1) + a;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	double result = calculate_arithmetic_mean(matrix, x, y);
	cout << "arithmetic mean of elements matrix: " << result << endl;

	for (int i = 0; i < x; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}