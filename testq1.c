#include <stdio.h>
int main()
{
int arr[100], even[100], odd[100];
int i, j = 0, k = 0, size;
scanf("%d", &size);
for (i = 0; i < size; i++)
{
scanf("%d",&arr[i]);
}
for (i = 0; i < size; i++)
{
if (arr[i]%2 == 0)
{
even[j++]=arr[i];
}
else
{
odd[k++] = arr[i];
}
}
for (i=0;i<k; i++)
{
printf("%d ",odd[i]);
}
for (i=0;i<j;i++)
{
 printf("%d ",even[i]);
}
return 0;
}
