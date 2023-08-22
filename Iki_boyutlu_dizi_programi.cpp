#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int row, colspan;
    int matrix[1][1];
    
    printf("Enter a row: ");
    scanf_s("%d", &row);

    printf("Enter a colspan: ");
    scanf_s("%d", &colspan);
    matrix[row]

    for (i = 0; i < row; i++) {
        for (j = 0; j < colspan; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf_s("%d", &matrix[i][j]);
        }
    }

    printf("Your array\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < colspan; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}






