#include <stdio.h>

int main()
{
    int arr[10], size, i, result;

    scanf("%d", &size);

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // Write your code here
    result = arr[0];
    for (i = 1; i < size; i++)
    {
        result = result ^ arr[i];
    }
    printf("%d", result);

    return 0;
}