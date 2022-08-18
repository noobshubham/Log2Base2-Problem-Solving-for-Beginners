#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    // Write your code here
    if (num < 0)
    {
        printf("%d", -num - 0);
    }
    else
    {

        printf("%d", num - 0);
    }
    return 0;
}