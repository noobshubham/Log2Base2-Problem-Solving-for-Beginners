#include <stdio.h>

int main()
{
    char str[10], copy_str[10];
    scanf("%s", str);

    // Write your code here
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        copy_str[len++] = str[i];
    }
    copy_str[len] = '\0';
    printf("Copied string = %s", copy_str);
    return 0;
}