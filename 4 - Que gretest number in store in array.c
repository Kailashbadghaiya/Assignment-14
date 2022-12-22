#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i;
  float a[100];

  printf("Enter the number of elements (1 to 100): ");
  scanf("%d",&n);

  for (i = 0; i < n;i++)
  {
    printf("Enter number%d: ", i + 1);
    scanf("%f", &a[i]);
  }
  for (i = 1; i < n; i++)
  {
    if (a[0] < a[i])
    {
      a[0] = a[i];
    }
  }

  printf("gretest element = %.2f", a[0]);

  return 0;
}

