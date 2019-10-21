#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 1;
    do{
        printf("%d\n",index); // processes output first
        index++; //or typically index = index+1
    }while(index<5);
    return 0;
}