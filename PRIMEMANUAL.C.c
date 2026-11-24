#include <stdio.h>

// Function to check whether a number is prime
int isPrime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int start, end, i;

    printf("==================================================\n");
    printf("       PRIME NUMBERS BETWEEN TWO NUMBERS\n");
    printf("==================================================\n");

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    printf("\n--------------------------------------------------\n");
    printf(" Prime numbers between %d and %d are:\n", start, end);
    printf("--------------------------------------------------\n");

    for (i = start; i <= end; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n==================================================\n");
    printf(" Summary: Prime numbers displayed successfully.\n");
    printf("==================================================\n");

    return 0;
}