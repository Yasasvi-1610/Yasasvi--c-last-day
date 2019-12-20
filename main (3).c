/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int i,j=53,n;
     printf("enter n value");
     scanf("%d",&n);
   printf("%d\t%d\t",j,j);
    for(i=0;i<=n;i-13)
    {
       j=j-13;
       printf("%d\t%d\t",j,j);
    }
 
    return 0;
}
