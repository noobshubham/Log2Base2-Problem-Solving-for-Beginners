#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);

    // Write your code here
    if ((num & 1) == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }

    return 0;
}