#include<stdio.h>
void main()
{
    int a[50],n,i,x,j,swap;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    { 
      j=i;
      while (j>0 && a[j-1]>a[j])
      {
        swap=a[j];
        a[j]=a[j-1];
        a[j-1]=swap;
        j--;
      }
    }
    printf("sorted array is ");
    for(i=0;i<n;i++)
    {
     printf("\n%d",a[i]);
    }
}