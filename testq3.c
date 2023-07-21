#include <stdio.h>
int main()
{
char comp[100], decomp[100];
int i,j,k,repeat;
scanf("%s",comp);
i=0;j=0;
while (comp[i] != '\0')
{
if (comp[i]>= 'a' && comp[i]<= 'z')
{
decomp[j++] = comp[i++];
}
else if (comp[i]>= '0' && comp[i]<= '9')
{
repeat = comp[i] - '0';
for (k=0;k<repeat;k++)
{
decomp[j++] = comp[i - 1];
}
i++;
}
}
decomp[j] = '\0';
printf("%s\n",decomp);
return 0;
}
