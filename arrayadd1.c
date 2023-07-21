#include<stdio.h>
int main()
{
    int a[100][100],i,j,row,col,sum;
    scanf("%d %d",&row,&col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<row; i++)
    {
        sum=0;
        for(j=0; j<col; j++)
        {
            sum=sum+a[i][j];

        }
        printf("%d ",sum);
    }
    printf("\n");
    for(i=0; i<row; i++)
    {
        sum=0;
        for(j=0; j<col; j++)
        {
            sum=sum+a[j][i];
        }
        printf("%d ",sum);
    }
}
