#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    // Write your code here
    int t0, t1, s;
    t0 = 0, t1 = 1;
    if (n <= 1)
    {
        printf("%d ", 0);
    }
    else
    {
        printf("%d %d ", t0, t1);
        for (int i = 2; i < n; i++)
        {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
            printf("%d ", s);
        }
    }
    return 0;
}