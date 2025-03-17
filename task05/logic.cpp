bool is_local_minimum(int** matrix, int i, int j, int n, int m) {
    int current = matrix[i][j];
    if (i > 0 && current >= matrix[i - 1][j]) return false;
    if (i < n - 1 && current >= matrix[i + 1][j]) return false;
    if (j > 0 && current >= matrix[i][j - 1]) return false;
    if (j < m - 1 && current >= matrix[i][j + 1]) return false;
}

void find_last_local_minimum(int** matrix, int n, int m, int& row, int& col) {
    row = -1;
    col = -1;
    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            if (is_local_minimum(matrix, i, j, n, m)) {
                row = i + 1;
                col = j + 1;
                return;
            }
        }
    }
}