/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,n,sum=0,r,temp,temp1;
    printf("Enter a value:");
    scanf("%d",&a);
    temp=a;
    temp1=a;
    while (temp!=0)
    {
        temp=temp/10;
        n++;
    }
    //if(n>2)
   //temp=a;
        while(a!=0)
        {
            r=a%10;
            sum=sum+pow(r,n);
            a=a/10;
        }
    if(temp1==sum)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not a armstrong number");
    }
    return 0;
}
