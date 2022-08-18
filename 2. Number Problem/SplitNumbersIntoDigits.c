#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    // Write your code here
    int res;
    while (num > 0)
    {
        res = num % 10;
        printf("%d", res);
        num = num / 10;
    }

    return 0;
}