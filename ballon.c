#include <stdio.h>
#include <string.h>

int main() {
    int n,i,j,k;
    char s[101];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    scanf("%s",&s);
    }
        int len = strlen(s);
        for (i = 0; i < len; i++)
            {
                if (s[i] == s[i+1] && len <=2)
                       {
                        printf("-1");
                        }
                 else if (s[i] == s[i+1] && len >2)
                 {
                     s[i+1]=s[i+2];
                     printf("%s",s);
                 }
                else if(s[i]!= s[i+1])
                {
                    printf("%s",s);
                }
                }
                }




