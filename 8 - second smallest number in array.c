#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n,i,a[1000],min1,min2 ;

     printf("Enter the number of size : ");
     scanf("%d",&n);

     printf("Input the array elements : ");
    for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
     min1 = INT_MAX;
     min2 = INT_MAX ;
   if (n < 2)
    {
       printf("Invalid Input");
    }
     for(i=0;i<n;i++)
    {
        if(a[i] < min1)
   {
     min2 = min1;
     min1 = a[i];
     }
       else if(a[i] < min2 && a[i] != min1)
    {
    min2 = a[i];
    }
   }
       printf("The second smallest element is %d \n",min2);
      return 0;
}

