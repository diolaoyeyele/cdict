#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello\"world!");/*backlash will neutralize quotation */
    printf("this %s is %f and is not %d","number",76.88283937,76);/*s is for char, d is for numbers, f is for float */
    /*%c can be used for non-string characters */
    return 0;
}