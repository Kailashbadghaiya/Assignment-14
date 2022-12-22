#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,a[100] ;
    int even = 0,Odd = 0 ;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    printf("Enter the array elements : ");

    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2 == 0)
        {
            even = even + a[i] ;
        }
        else
            Odd = Odd + a[i] ;
    }
    printf("sum of Even number = %d\n",even);
    printf(" sum of Odd number = %d\n",Odd) ;
    return 0;
}
