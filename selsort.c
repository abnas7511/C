#include<stdio.h>
void main()
{
    int a[50],n,i,choice,swap,j,k;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {   
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            swap=a[i];
            a[i]=a[k];
            a[k]=swap;
        }
    }
    printf("sorted array is ");
    for(i=0;i<n;i++)
     printf("\n%d\n",a[i]);
    }