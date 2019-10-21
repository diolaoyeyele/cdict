#include <stdio.h>
#include <stdlib.h>

int min(int numone,int numtwo){
    int result;
    if(numone<numtwo){
        result = numone;
    }else{
        result = numtwo;
    }
    return result;
}
int max(num1,num2,num3){
    int result;
    if(num1 >= num2 && num1 >= num3 ){// || is used for OR, == is used for equal, != is used for not equal
        result = num1;                //negation if(!(3>2)){printf (true);}
    }
    else if(num2 >= num1 && num2 >= num3 ){
        result = num2;
    }
    else{
        result = num3;
    }
    return result;
}



int main()
{
    printf("the lesser is %d",min(3,5));
    printf("the greatest is %d", max(34,67,45));
    return 0;
}