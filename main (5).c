/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
//80,10,70...
*******************************************************************************/
#include <stdio.h>

int main()
{
    int s=10,s1=80,n,i,j;
    scanf("%d",&n);
    printf("%d\t%d",s1,s);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            s=s+5;
            printf("%d\t",s);
        }
        else
        s=s1=10;
        printf("%d\t",s1);
    }
    return 0;
}
