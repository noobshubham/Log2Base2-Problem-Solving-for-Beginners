#include <stdio.h>
int main()
{
    int num;

    scanf("%d", &num);

    // Write your code here
    int temp, mod, result;
    temp = num;
    result = 0;
    while (num > 0)
    {
        mod = num % 10;
        result = result + (mod * mod * mod);
        num = num / 10;
    }
    if (temp != result)
    {
        printf("Not Armstrong number");
    }
    else
    {
        printf("Armstrong number");
    }
    return 0;
}