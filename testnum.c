#include <stdio.h>

void testnum()
{
    int num;
    printf("\n\Enter any number: ");
    scanf("%d", &num);
    

    if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(num == 0)
    {
        printf("Number is ZERO");
    }

    //return 0;
}
