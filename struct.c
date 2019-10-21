#include <stdio.h>
#include <stdlib.h>

struct Driver{
    char name[20];
    char sex[10];
    int age;
    double rating;
}; //don't forget the semicolon



int main(){
    struct Driver driver1;
    strcpy(driver1.name,"willow");
    strcpy(driver1.sex,"female");
    driver1.age = 24;
    driver1.rating = 4.8;

    struct Driver driver2;
    strcpy(driver2.name,"stuart");
    strcpy(driver2.sex,"male");
    driver2.age = 32;
    driver2.rating = 4.4;

    printf("%f",driver1.rating);
    return 0;
} 