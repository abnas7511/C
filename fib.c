#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,c=0,i;
    printf("%d\n%d\n",a,b);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}
void main()
{
    int n,i,c;
    printf("enter limit");
    scanf("%d",&n);
    fib(n);
}