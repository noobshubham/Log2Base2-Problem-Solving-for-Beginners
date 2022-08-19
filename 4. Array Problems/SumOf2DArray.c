#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int arr[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Write your code here
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            count += arr[i][j];
        }
    }
    printf("%d", count);

    return 0;
}