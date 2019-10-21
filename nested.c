#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int numb [2][5] = {
      {2,4,6,8,10},
      {1,3,5,7,9}
      //alternatively numb[0][0] = 2;
     };
    for(i=0; i<2; i++){
        for(j=0; j<5; j++){
            printf("%d,", numb[i][j]);
        }
        printf("\n");
    }

    return 0;
}