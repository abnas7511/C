#include<stdio.h>
int check(int n)
{
    if (n%2==0)
     return 1;
    else
     return -1;
}
void main()
{
    int n,c;
    printf("enter the num to be checked");
    scanf("%d",&n);
    c=check(n);
    if(c==1)
     printf("even");
    else
     printf("odd");
}
    