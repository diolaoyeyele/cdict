#include <stdio.h>
#include <stdlib.h>

int main()
{
    char graded = 'p';//char is single quote //srting is double quote
    
    switch(graded){
        case 'p' : {
            printf("you have passed");
        break;
        }
        case 'r' : {
            printf("you have to redo test");
        break;
        }
        case 'f' : {
            printf("you have failed");
        break;
        }
        default : {
        printf("invalid");
        break;
        }
    }
    return 0;
}