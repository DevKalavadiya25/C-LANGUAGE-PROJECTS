#include <stdio.h>

int main() {
    int rows, cols ;
	int i, j ; 
	int rowNum, colNum;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int array[rows][cols];

    printf("Enter array's elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &rowNum);
    
    int rowSum = 0;
    printf("Elements of row %d: ", rowNum);
    for(j = 0; j < cols; j++) {
        printf("%d ", array[rowNum][j]);
        rowSum += array[rowNum][j];
    }
    printf("\nThe sum of row %d: %d\n", rowNum, rowSum);

    printf("Enter column number: ");
    scanf("%d", &colNum);
    
    int colSum = 0;
    printf("Elements of column %d: ", colNum);
    for(i = 0; i < rows; i++) {
        printf("%d ", array[i][colNum]);
        colSum += array[i][colNum];
    }
    printf("\nThe sum of column %d: %d\n", colNum, colSum);

    return 0;
}
