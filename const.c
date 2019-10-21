#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int anumber = 67; /*with const you cant change the value of the variable down the line */
    printf("%d",anumber);
    printf("hello\n"); /*technically any string or non-variabl charcter in printf is also a const because it cant be changed */
    return 0;
}