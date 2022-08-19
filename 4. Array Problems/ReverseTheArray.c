#include <stdio.h>

int main()
{
    int arr[10], n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Write your code here
    int lastIndex = n - 1;
    for (i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[lastIndex - i];
        arr[lastIndex - i] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}