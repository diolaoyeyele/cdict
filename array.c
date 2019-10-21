#include <stdio.h>
#include <stdlib.h>

int main()
{
    int multiples[] = {2,4,6,8,10};
    multiples[3] = 68;/*changes the value at the index */
    int numbers[20];/*20 is the limit */
    numbers[5] = 45;
    printf("the third multiple is %d \n", multiples[2]);

    return 0;
}