#include<stdio.h>
int  prime(int n)
{
    int i;   
    for(i=2;i<n/2;i++)
    { 
      if(n%i==0)
       return 1;
      else
       return -1;
    }
}
void main()
{
  int n,c;
  printf("enter the no to be checked");
  scanf("%d",&n);
  c=prime(n);
  if(c==1)
    printf("not prime"); 
  else
    printf("prime"); 
}