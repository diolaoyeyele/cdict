#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somenum[] ={10,20,30,40,50};
    int i;
     int num;
    for(num=10; num>=1; num--){
        printf("%d\n",num);
    }
    
    for(i=0; i<=3;i++){
        printf("%d\n",somenum[i]);
    }    return 0;

}