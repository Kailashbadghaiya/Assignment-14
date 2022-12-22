 #include<stdio.h>
 #include<conio.h>
 int main()
    {

        int i,j,k,n,a[30];

        printf("Enter the value of number : ");
        scanf("%d",&n);

        printf("Enter the numbers :");

        for (i=0;i<n;i++)
            scanf("%d",&a[i]);

        for (i=0;i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if (a[i]>a[j])
                {
                    k = a[i];
                    a[i] = a[j];
                    a[j] = k;
                }
            }
        }
        printf("The numbers arranged in ascending order :\n");

        for (i=0;i<n;i++)
            printf("%d ",a[i]);

    }
