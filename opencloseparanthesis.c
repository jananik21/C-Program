#include <stdio.h>
#include <string.h>

int Bracket(char* s) {
    int n = strlen(s);
    int i;
    int Open = 0, Close = 0;

    for (i = 0; i < n; i++) {
        if (s[i] == '(')
        {
            Open++;
            Close++;
        }
        else if (s[i] == ')')
        {
            if (Open > 0)
            Open--;
            Close--;
        }
        else
        {
        if (Close> 0)
            Open--;
            Close++;
        }

        if (Close < 0)
        {
            return 0;
        }
    }

    return Open == 0;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100];
        scanf("%s",&s);

        if (Bracket(s))
        {
            printf("Yes\n");
        } else
        {
            printf("No\n");
        }
}

    return 0;
}
