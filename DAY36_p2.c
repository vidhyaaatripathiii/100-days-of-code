#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

int main(void)
{
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, columns;
    int i, j;
    int sum = 0;
    double average;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    if (rows < 1 || rows > MAX_ROWS ||
        columns < 1 || columns > MAX_COLS)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    average = (double)sum / (rows * columns);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
