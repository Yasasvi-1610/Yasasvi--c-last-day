/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
//8,6,18,150
*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,res,s=8;
    scanf("%d",&n);
    printf("%d\t",s);
    for(i=1;i<=n;i++)
    {
        res=i*(((s)*i)-(i+1));
        printf("%d\t",res);
        s=res;
    }
    return 0;
}
