#include <stdio.h>

int main()
{
    char str1[10], str2[10];
    scanf("%s%s", str1, str2);

    // Write your code here
    int check = 1;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            check = 0;
            break;
        }
    }
    if (check != 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}