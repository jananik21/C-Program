#include <stdio.h>
#include <string.h>

int isValid(char* s) {
    int n = strlen(s);
    int i;
    int minOpen = 0, maxOpen = 0;

    for (i = 0; i < n; i++) {
        if (s[i] == '(')
        {
            minOpen++;
            maxOpen++;
        }
        else if (s[i] == ')')
        {
            if (minOpen > 0)
            minOpen--;
            maxOpen--;
        }
        else
        {
            if (minOpen > 0)
            minOpen--;
            maxOpen++;
        }

        if (maxOpen < 0)
        {
            return 0;
        }
    }

    return minOpen == 0;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[1000];
        scanf("%s",&s);

        if (isValid(s))
        {
            printf("Yes\n");
        } else
        {
            printf("No\n");
        }
    }

    return 0;
}
