/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int rr,br;
    printf("enter the balls remaining");
    scanf("%d",&br);
    printf("Enter the runs required");
    scanf("%d",&rr);
    if(br>100)
    {
        printf("%d runs in %d overs @ %d runs per over",rr,br/6,rr/(br/6));
    }
    else
    {
        printf("%d runs in %d balls @ %d runs per no.of balls",rr,br,rr/br);
    }
    return 0;
}
