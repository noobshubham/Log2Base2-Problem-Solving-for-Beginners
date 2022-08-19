#include <stdio.h>

int main()
{
    int arr[10], n, i, key;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    // Write your code here
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            check = 1;
            break;
        }
    }
    if (check != 1)
    {
        printf("Key not found");
    }
    else
    {
        printf("Key found");
    }

    return 0;
}