#include <stdio.h>
int main()
{
    int num;

    scanf("%d", &num);

    // Write your code here
    int flag = 0;
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not Prime number");
    }

    return 0;
}