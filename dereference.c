#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 54;
    int * pAge = &age; //dereferencing a pointer will return the actual value in the variable
    printf("%p\n", *pAge);//to cancel out dereference use & e.g $*pAge amd to uncancel *$*pAge and so on OR
                          // *$*$*$age
    return 0;
}