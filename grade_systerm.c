#include <stdio.h>

int main()
{
    int a;
    printf("Enter your marks: ");
    scanf("%d", &a);

    if(a < 0 || a > 100)
        printf("Enter a valid marks");

    else if(a > 0 && a <= 32)
        printf("F");

    else if(a >= 33 && a < 39)
        printf("D");

    else if(a >= 40 && a < 49)
        printf("C");

    else if(a >= 50 && a < 59)
        printf("B");

    else if(a >= 50 && a < 59)
        printf("B");

    else if(a >= 60 && a < 69)
        printf("A-");

    else if(a >= 70 && a < 79)
        printf("A");

    else if(a >= 80 && a <= 100)
        printf("A+");

    return 0;
}
