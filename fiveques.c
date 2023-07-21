#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    char  s[6][6];
    int ans=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%s",s[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(s[i][j]=='s')
            {
                if(j+3<m)
                {
                    if(s[i][j]=='s' && s[i][j+1]=='a' && s[i][j+2]=='b' && s[i][j+3]=='a')
                        ans++;
                    if(i+3<n)
                    {
                        if(s[i][j]=='s' && s[i+1][j+1]=='a' && s[i+2][j+2]=='b' && s[i+3][j+3]=='a')
                             ans++;

                    }
                }
                if(i+3<n)
                {
                    if(s[i][j]=='s' && s[i+1][j]=='a' && s[i+2][j]=='b' && s[i+3][j]=='a')
                        ans++;

                }
                if((i-3)>=0 && (j+3)<m)
                {

                    if(s[i][j]=='s' && s[i-1][j+1]=='a' && s[i-2][j+2]=='b' && s[i-3][j+3]=='a')
                             ans++;


                }
            }
        }
    }
    return 0;
}

