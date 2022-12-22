#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,a[100];

   printf("Input the number of size : ");
   scanf("%d",&n);

   for(i=0;i<n;i++)
      {
	  scanf("%d",&a[i]);
	  }
   for(i=n-1;i>=0;i--)
      {
	   printf("%d ",a[i]);
	  }
   return 0 ;
}
