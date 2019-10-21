#include <stdio.h>
#include <stdlib.h>

void helloWorld(){//void basically states that nothing is being returned
    printf("hello world!");
}
void username(char name[]){
    printf("user is %s",name);
}
double cube(double num){
    double result = num*num*num;
    return result;
    //or return num* num* num;
}
//to create a function belo man function
//double sqr(double num);
int main()
{
    helloWorld();
    username("jane");
    username("timmy");
    printf("the cube is %f",cube(4.0));
    return 0;
}
/* double sqr(double num){
    double result = num*num;
    return result;
    }*/