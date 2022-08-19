#include <stdio.h>

int main()
{
    int arr[10], n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Write your code here
    int largest = arr[0];
    int smallest = arr[0];
    for (int j = 1; j < n; j++)
    {
        if (arr[j] > largest)
        {
            largest = arr[j];
        }
        if (arr[j] < smallest)
        {
            smallest = arr[j];
        }
    }
    printf("Max = %d", largest);
    printf("Min = %d", smallest);
    return 0;
}