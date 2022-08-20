#include <stdio.h>
#include <math.h>
int main()
{
    int n;

    scanf("%d", &n);

    // Write your code here
    int result, i;
    result = 1;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            result = result + i + n / i;
        }
    }
    if (result == n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}