#include <stdio.h>

int main()
{
    int a[5], i;
    int *ptr = a;

    printf("==================================================\n");
    printf("     ARRAY IN REVERSE ORDER USING POINTERS\n");
    printf("==================================================\n");

    printf("Enter 5 array elements: ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\n--------------------------------------------------\n");
    printf(" Array elements in reverse order:\n");
    printf("--------------------------------------------------\n");

    // Display array elements using pointers
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n==================================================\n");
    printf(" Summary: Array printed in reverse order successfully.\n");
    printf("==================================================\n");

    return 0;
}