#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100],num,i;
    float avg=0,sum=0;

    printf("Enter the numbers of average: ");
    scanf("%d",&num);

    printf("Enter the numbers: \n");

    for(i=1; i<=num; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=1; i<=num; i++)
    {
        sum=sum+a[i];
        avg=sum/num;
    }
    printf("Average of numbers are: %.2f",avg);
    return 0;
}
