#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charName[] ="Fred";
    int instime = 9;
    printf("%s said lets go home \n",charName);
    printf("but looked at the clock and it was only %d\n",instime);
    printf("and %s really wanted to stay!\n", charName);
    printf("so %s said oh it's just %d . let's stay!\n",charName, instime);
    instime = 8;/*you can change the value of the variable way into the code */
    printf("and  %d was very glad\n", instime);
    return 0;
}
