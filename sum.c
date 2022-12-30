#include<stdio.h>
int sum(int a,int b)
{
 int c;
 c=a+b;
 return c;
 }
void main()
{   int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum is %d",c);
}