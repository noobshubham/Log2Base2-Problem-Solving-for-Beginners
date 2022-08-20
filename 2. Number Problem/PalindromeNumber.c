#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    // Write your code here
    int temp, result, mod;
    temp = num;
    result = 0;
    while (num > 0)
    {
        mod = num % 10;
        result = result * 10 + mod;
        num = num / 10;
    }
    if (temp != result)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }
    return 0;
}