#include <stdio.h>
#include <stdlib.h>

int main()
{
    //pointers are a datatype that store memory address of values of variables
    int age = 54;
    int * pAge = &age;
    char grade = 'A';
    char *pGrade = &grade;
    double gpa = 3.88;
    double *pGpa = &gpa;
    printf("Hello world!\n");
    return 0;
}