#include<stdio.h>
int linearsearch(int a[],int n,int x)
{  
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
          return i;
    }
    return -1;
}
void main()
{   int n,a[50],i,x,l;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("enter the number to be searched");
    scanf("%d",&x);
    l= linearsearch(a,n,x);
    if(l==-1)
        printf("not found");
    else
        printf("found at %d position",l+1);
}