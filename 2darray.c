#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numb [2][5] = {
      {2,4,6,8,10},
      {1,3,5,7,9}
      //alternatively numb[0][0] = 2;
  };
    printf("%d\n", numb[1][2]);
    return 0;
}