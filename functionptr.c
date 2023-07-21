#include<stdio.h>
{
int (int a,int b);
printf("IN INTOTWO %d\n",*a);
printf("IN INTOTWO %d\n",*b);
}
int main()
{
    int a,b;
    int *ptr1=&a;
    int *ptr2=&b;
printf("ENTER THE VALUES:");
scanf("%d %d",&a,&b);
printf("BEFORE IN MAIN:%d %d",a,b);
printf("%d",*a);
printf("%d",*b);
}
