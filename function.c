#include<stdio.h>
void swap(int a,int b);
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("%d ",a,b);
}
int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   swap(a,b);
   printf("%d ",a,b);
}

