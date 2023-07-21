#include<stdio.h>
int main()
{
    int a,b;
    float c,d,sum,sum1,total;
    scanf("%d %d",&a,&b);
    while(a--)
    {
        scanf("%f",&c);
        sum = sum+(c*18);
    }
    while(b--)
    {
        scanf("%f",&d);
        sum1 = sum1+(d*12);
    }
    total= sum+sum1;
    printf("Total estimated cost is:%f",total);
}

