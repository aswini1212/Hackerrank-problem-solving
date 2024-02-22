#include <stdio.h>

int main()
{
    int n, i, j, k;

    // Get the number of stairs from the user
    //printf("Enter the number of stairs:");
    scanf("%d", &n);

    // Outer loop for the number of stairs
    for (i = 0; i < n; i++)
    {
        // Inner loop for printing spaces before the "#"
        for (k = 0; k < n - i - 1; k++)
        {
            printf(" ");
        }

        // Inner loop for printing the "#"
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
