/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=7,n;
    scanf("%d",&n);
    printf("%d\t",i);
    while(i<n)
    {
        i=i+3;
        printf("%d\t",i);
        i=i-2;
        printf("%d\t",i);
    }
    return 0;
}
