#include<stdio.h>
int partion(int a[],int l,int r)
{
   int key=a[l],i=l+1,j=r,swap;
   do
   {
    while(key>a[i]&&i<r)
          i++;
    while(key<a[i]&&j>l)
      j--;
    if(i<j)
    {
        swap=a[i];
        a[i]=a[j];
        a[j]=swap;
    }
   }
   while(i<j);
   swap=a[l];
   a[l]=a[j];
   a[j]=swap;
   return j;
}
void qs(int a[],int l,int r)
{
    if(l<r)
    {
        int pos=partion(a,l,r);
        qs(a,l,pos-1);
        qs(a,pos+1,r);
    }
}
int main()
{
    int i,n,a[25];
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    qs(a,0,n-1);
    printf("sorted array is \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }  
}
