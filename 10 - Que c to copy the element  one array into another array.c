#include<stdio.h>
#include<conio.h>
int main()
{
    int a1[] = {1,2,3,4,5},i;
    int length = sizeof(a1)/sizeof(a1[0]);
    int a2[length];

     for (i=0;i<length;i++)
    {
        a2[i] = a1[i];
    }
    printf("Elements of original array: \n");
    for (i=0;i<length;i++)
    {
        printf("%d ", a1[i]);
    }
     printf("\n");

    printf("Elements of new array: \n");
    for (i=0;i<length;i++)
    {
        printf("%d ",a2[i]);
    }
    return 0;
}
