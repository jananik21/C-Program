#include <stdio.h>
int main()
{
int arr[100];
int i, j, k,size;
scanf("%d",&size);
for (i = 0; i < size; i++)
{
scanf("%d",&arr[i]);
}
for (i=0;i<size;i++)
{
for (j=i+1;j<size;)
{
if (arr[j]==arr[i])
{
for (k=j;k<size;k++)
{
arr[k]=arr[k + 1];
}
size--;
} else
{
j++;
}
}
}
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
return 0;
}
