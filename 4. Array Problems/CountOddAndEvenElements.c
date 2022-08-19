#include <stdio.h>

int main()
{
    int arr[10], size, i;
    scanf("%d", &size);

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    // Write your code here
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Even Number Count = %d", even);
    printf("Odd Number Count = %d", odd);
    return 0;
}