#include<stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int sparseMatrix[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &sparseMatrix[i][j]);
        }
    }
 
    int size = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (sparseMatrix[i][j] != 0)
                size++;
        }
    }
 
    int compactMatrix[3][size];
 
    // Making of new matrix
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (sparseMatrix[i][j] != 0) {
                compactMatrix[0][k] = i;   // Rows at which non zero elements are present.
                compactMatrix[1][k] = j;   // Corresponding Columns at which non zero elements are present.
                compactMatrix[2][k] = sparseMatrix[i][j];   // Corresponding element
                k++;
            }
        }
    }
 
    for (int i=0; i<3; i++) {
        for (int j=0; j<size; j++)
            printf("%d ", compactMatrix[i][j]);
 
        printf("\n");
    }
    return 0;
}