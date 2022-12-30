#include<stdio.h>
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
     fact=fact*i;  
    return fact;
}
void main()
{   int x,c;
    printf("enter the no to be checked");
    scanf("%d",&x);
    c=fact(x);
    printf("the factorial is %d",c);
}