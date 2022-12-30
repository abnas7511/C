#include<stdio.h>
int bubblesort(int a[],int n)
{
    int i,j,swap;
    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < n-i-1; j++)
      {
        if (a[j]>a[j+1])
        {
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap;
        }       
      }
      
    }
    return a[i];
} 
void display(int a[],int n)
{
    printf("sorted array is \n");
    for (int  i = 0; i < n; i++)
    {
        printf("\n%d\n",a[i]);
    }
}

int main()
{
    int a[50],i,j,n;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    bubblesort(a,n);
    display(a,n);
    return 0;
}


