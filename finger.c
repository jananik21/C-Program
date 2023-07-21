#include<stdio.h>

char* getfingerName(int n){
int finNum = ((n -1)%5)+1;
    switch(finNum)

    {
     case 1:
        return "thumb";
        break;
     case 2:
        return "index";
        break;
     case 3:
        return "middle";
        break;
     case 4:
        return "ring";
        break;
     case 5:
        return "little";
        break;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    char* fingerName = getfingerName(n);
    printf("%s",fingerName);
}
