#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    // Write your code here
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}