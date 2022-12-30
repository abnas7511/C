#include<stdio.h>
int bubblesort(int a[],int n)
{
    int i,j,swap;
    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < n-i-1; j++)
      {
        if (a[j]>a[j+1])
              swap=a[j];
              a[j]=a[j+1];
              a[j+1]=swap;
      }
    }
    return a[i];
} 
int binary(int a[],int l,int r,int x)
{
    int m;
    while(l<=r)
     {  
        m=(l+r)/2;
        if(a[m]==x)
         return m;
        else if(x<a[m])
         return binary(a,l,m-1,x);
        else
         return binary(a,m+1,r,x);
     }
    return -1;
}
int main()
{  int a[50],n,x,i,c;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    bubblesort(a,n);
    printf("sorted array is \n");
    for(i=0;i<n;i++)
     printf("%d\n",a[i]);
    printf("enter the element to be searched");
    scanf("%d",&x);
    c=binary(a,0,n-1,x);
    if(c==-1)
     printf("not found!!");
    else
     printf("found at %d position",c+1);
    return 0;
}