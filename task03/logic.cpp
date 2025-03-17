int count_rows_positives(int** matrix, int n, int m) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        int positiveCount = 0;
        int negativeCount = 0;

        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > 0) {
                positiveCount++;
            }
            else if (matrix[i][j] < 0) {
                negativeCount++;
            }
        }

        if (positiveCount > negativeCount) {
            count++;
        }
    }
    return count;
}