#include <stdio.h>
#include <stdlib.h>

int main()
{   //files could be .css, .html etc
    char line[255];
    FILE * fpointer = fopen("staff.txt","w");//fpointer is not a keyword //to specify directory e.g ("c:/desktop/staff.txt")
    fprintf(fpointer, "sam works in hr\ndert works in packaging\narty works in corperate ");
 //   FILE * fpointer = fopen("staff.txt","a");//this will append if you changed mode from w to a on line 6
  //  fprintf(fpointer, "sam works in hr");//to override erase this text in write mode
  //first change mode to r
    fgets(line, 255, fpointer);//only prints first line
    fgets(line, 255, fpointer);//prints second line without printing first line
    printf("%s\n", line);
    fclose(fpointer);
    return 0;
}