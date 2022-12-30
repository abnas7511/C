#include<stdio.h>
void main()
{
    int a[50],n,i,swap,j;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    printf("sorted array is ");
    for(i=0;i<n;i++)
    {
        printf("\n%d\n",a[i]);
    }
}