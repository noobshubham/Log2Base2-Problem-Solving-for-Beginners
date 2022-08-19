#include <stdio.h>

int main()
{
    char str1[10], str2[10], str3[20];
    scanf("%s%s", str1, str2);

    // Write your code here
    for (int i = 0; i < 20; i++)
    {
        if (i >= 10)
        {
            str3[i] = str2[i];
        }
        else if (i < 10)
        {
            str3[i] = str1[i];
        }
    }
    printf("%s", str3);

    return 0;
}