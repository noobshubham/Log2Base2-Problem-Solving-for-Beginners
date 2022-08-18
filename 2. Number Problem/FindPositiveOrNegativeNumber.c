#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    //Write your code here
    if (num < 0) {
        printf("Negative");
    } else if (num > 0) {
        printf("Positive");
    } else {
        printf("Neither positive nor negative");
    }

    return 0;
}