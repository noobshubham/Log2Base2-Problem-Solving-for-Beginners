#include <stdio.h>

int main()
{
    char str[10];
    scanf("%s", str);

    // Write your code here
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);

    return 0;
}