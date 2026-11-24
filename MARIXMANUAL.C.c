#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], sum[2][2];
    int i, j;

    printf("==================================================\n");
    printf("             SUM OF TWO MATRICES\n");
    printf("==================================================\n");

    printf("Enter elements of the first matrix (2x2):\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix (2x2):\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Add corresponding elements of both matrices
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\n--------------------------------------------------\n");
    printf(" Sum of the two matrices:\n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    printf("==================================================\n");
    printf(" Summary: Matrix addition completed successfully.\n");
    printf("==================================================\n");

    return 0;
}