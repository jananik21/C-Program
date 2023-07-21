#include<stdio.h>

int main()
{
    int a=524,i,b,sum=0,val,j,temp;
    b=a;
    for(i=0;b!=0;b=b/10)
    {
        temp=b%7;
        for(j=i,val=1;j>=0;j=j-1)
        {
            val=val*8;

        }
        if(temp<3)
        {
            temp=temp+1;
        }
        sum=sum*val+temp;
    }
    printf("%d",sum);

}
