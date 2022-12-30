#include<stdio.h>
int swap(int a[],int b,int c)
{
    int t;
    t=a[b];
    a[b]=a[c];
    a[c]=t;
}
void selsort(int a[],int n)
{
 int i,j,k;
  for(i=0;i<n-1;i++)
  { 
    k=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[k])
            k=j;
    }
    if(k!=i)
     swap(a,i,k);
  }
  printf("sorted array is\n");
  for ( i = 0; i <n; i++)
    printf("%d\n",a[i]);
}
int main()
{
 int i,j,k,a[50],n;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter %d elements",n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 selsort(a,n);
 return 0;
}