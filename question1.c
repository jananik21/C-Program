#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int t,p,h;
    t = (a*(a+1))/2;
    p = (b*((3*b) -1))/2;
    h = (c*((2*c) - 1));
   if(t == p == h)
    {
        printf("%d",t);
    }
    else
    {
        printf("NUMBER IS NOT TRIANGLE OR PENTAGONAL OR HEXGONAL");
    }
}
