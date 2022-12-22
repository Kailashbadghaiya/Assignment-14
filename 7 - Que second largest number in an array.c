#include<stdio.h>
#include<conio.h>
int main()
{
    int a[1000], size, i;
    int max1, max2,min;

    printf("Enter size of the array (1-1000): ");
    scanf("%d",&size);

    printf("Enter elements in the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
     max1 = max2 = min ;

    for(i=0;i<size;i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] < max1)
        {
            max2 = a[i];
        }
    }
    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);
   return 0;
}

