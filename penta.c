#include<stdio.h>
int main()
{
    long long t,p,h;
    scanf("%d %d %d",&t,&p,&h);
    long long triangle, pentagonal, hexagonal;
    while (t!=0)
        {
        triangle = t * (t + 1) / 2;
        pentagonal = p * (3 * p - 1) / 2;
        hexagonal = h * (2 * h - 1);
        if (triangle == hexagonal == pentagonal)
        {
            printf("%lld\n", triangle);
            break;
        }
    }
    return 0;
}
