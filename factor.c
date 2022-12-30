#include<stdio.h>
int factor(int x)
{  
 int n,i;
 for(i=1;i<=n;i++)
 { 
   if(x%i==0)
      printf("%d\n",i);
 }   
}
int main()
{
    int x;
    printf("enter the no to be checked");
    scanf("%d",&x);
    printf("the factors are\n");
    factor(x);
}