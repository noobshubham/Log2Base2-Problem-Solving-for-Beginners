#include <stdio.h>

int main()
{
    int num, n;

    scanf("%d%d", &num, &n);

    // Write your code here
    printf("%d", num | 1 << n - 1);
    return 0;
}