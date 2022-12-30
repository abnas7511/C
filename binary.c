#include<stdio.h>
void main()
{
    int a[50],n,i,choice,swap,j,l,r,m;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
            }
        }
    }
    printf("enter the element to be searched");
    scanf("%d",&choice);
    l=0;
    r=n-1;
    m=(l+r)/2;
    while(l<=r)
    {
        if(a[m]<choice)
        {
            l=m+1;
        }
        else if(a[m]==choice)
        {
            printf("found at index %d",m+1);
        }
        else
        {
            r=m-1;
            m=(l+r)/2;
        }
    }
    if(l>r)
    {
        printf("not found!!");
    }
}