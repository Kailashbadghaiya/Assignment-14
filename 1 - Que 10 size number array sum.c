#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100], size, i, sum = 0;

    printf("Enter array size\n");
    scanf("%d",&size);

    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&a[i]);

    for(i = 0; i < size; i++)
          sum = sum + a[i];

    printf("Sum of the array = %d\n",sum);

    return 0;
}
