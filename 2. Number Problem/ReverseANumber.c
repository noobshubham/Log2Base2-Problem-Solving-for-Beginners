#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    // Write your code here
    int ans, mod;
    ans = 0;
    while (num > 0)
    {
        mod = num % 10;
        ans = ans * 10 + mod;
        num = num / 10;
    }
    printf("%d", ans);

    return 0;
}