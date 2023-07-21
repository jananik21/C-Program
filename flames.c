#include<stdio.h>
int main()
{
int x,y,z,i,j,r,s,g,h;
char name1[30],name2[30],a[15]={' ','f','l','a','m','e','s'},b[11];
printf("FIRST NAME:");
scanf("%s",name1);
printf("SECOND NAME:");
scanf("%s",name2);
x=strlen(name1);
y=strlen(name2);
z=x+y;
for(r=6;r>1;r--)
{

s=z%r;

if(s==0)
{
s=r;
i=1;
}
else
{
a[s]='/o';
i=s+1;
}
j=1;
while(1)
{
if(i==s)
{
    break;
}
b[j]=a[i];
if(i==r)
{
    i=0;
}
i++;
j++;
}
for(i=1;i<=r-1;i++)
{

a[i]=b[i];

}

}
printf("\nRelationship status:");
switch(a[1])
{
case 'f':
printf("FRIENDSHIP");
break;
case 'l':
printf("LOVE");
break;
case 'a':
printf("AFFECTION");
break;
case 'm':
printf("MARRIAGE");
break;
case 'e':
printf("ENIMIES");
break;
case 's':
printf("SISTER");
break;
}
getch();
}

