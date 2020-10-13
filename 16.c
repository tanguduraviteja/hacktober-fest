#include <stdio.h>
int main()
{
int c[10], d[10], flag = 0, num1, num2, i, j;
scanf(" %d ",&num1);
scanf(" %d ",&num2);
for(i = 0;i < num1;i++)
scanf("%d",&c[i]);
for(i = 0;i < num2;i++)
scanf("%d",&d[i]);
  
  
printf("Intersection: ");
  
   for(i = 0;i < num1;i++)
{
   for(j = 0;j < num2;j++)
{if(b[i] != a[j])
{
flag = 1;
}
}
if(flag == 1)
{
printf(" %d ", b[i]);
}
flag = 0;
}
return 0;
}
