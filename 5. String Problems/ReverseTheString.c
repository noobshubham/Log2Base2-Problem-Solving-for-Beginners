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

    char res[10];
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        res[length++] = str[len - i];
    }
    res[length] = '\0';
    printf("%s", res);
    return 0;
}