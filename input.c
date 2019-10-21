#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    double gpa;
    char grade;
    char name[20];/*number in bracket limits number of strings ---COMEBACK TO THIS--- */
    char description[20];
    char firstname[20];
    char lastname[20];
    printf("please enter your name\n");
    scanf(" %s", &name);/*use %s when using a string */
    printf("name registered as %s\n", name);/*will only print out characters before a whitespace */
    printf("please enter your id\n");
    scanf("%d", &id);/*don't forget the ampersand */
    printf("id registered as %d\n", id);
    printf("please enter your gpa\n");\
    scanf("%lf", &gpa);/*use %lf when input a float or double */
    printf("gpa registeres as %f\n", gpa);
    printf("please enter your grade\n");
    scanf(" %c", &grade);/*remember to leave a space before %c */
    printf("gpa registered as %c\n", grade);
    /* printf("please enter description\n");/*--COMEBACK TO THIS--*/
    fgets( description, 20, stdin);/*remember to leave a space before %c, sometimes fgets does not work with scanf, stdin stands for standard inputs */
    /*printf("description registered as %s\n", description);/* any character after %s gets printed on a new line */
    printf("please enter your full name\n");
    scanf("%s %s", &firstname,&lastname);/*use %s when using a string *//*enetr multipl characters after whitespace */
    printf("name registered as %s %s\n", firstname,lastname);
    return 0;
}