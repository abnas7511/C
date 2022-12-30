#include<stdio.h>
void swap(int a[],int b,int c)
{
    int t;
    t=a[b];
    a[b]=a[c];
    a[c]=t;
}
void insort(int a[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
   { 
    j=i;
    while (j>0 && a[j-1]>a[j])
    {
        swap(a,j,j-1);
        j--;
    }
 }
 printf("sorted array is\n");
 for(i=0;i<n;i++)
   printf("%d",a[i]); 
}
int main()
{
    int i,n,a[50];
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    insort(a,n);
}