#include <stdio.h>
#include <stdlib.h>

int main()
{
     int index = 1;
    while(7 > index){ //avoid infinite loops, processescondtion first
        printf("%d\n",index);
        index++; //or typically index = index+1
    }
    //vs*/
    

    return 0;

}