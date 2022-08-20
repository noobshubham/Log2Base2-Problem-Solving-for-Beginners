#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s", str);

    // Write your code here
    int n, len;
    n = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        n++;
    }
    len = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] == str[len - i])
        {
            printf("Palindrome");
            break;
        }
        else
        {
            printf("Not Palindrome");
            break;
        }
    }

    return 0;
}