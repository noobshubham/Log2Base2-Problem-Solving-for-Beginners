#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d%d", &num1, &num2);

    // Write your code here
    if ((num1 ^ num2) != 0)
    {
        printf("Unequal");
    }
    else
    {
        printf("Equal");
    }

    return 0;
}