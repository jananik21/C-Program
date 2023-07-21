#include <stdio.h>
#include <stdbool.h>
bool lemonadeChange(int* bills, int billsSize) {
    int fives = 0, tens = 0,twentys=0,i;
    for ( i = 0; i < billsSize; i++) {
        if (bills[i] == 5)
        {
            fives++;
        } else if (bills[i] == 10)
        {
            if (fives == 0)
            {
                return false;
            }
            fives--;
            tens++;
        }
        else if (tens > 0 && fives > 0)
            {
                tens--;
                fives--;
            }
            else if(tens>0 && fives==0)
            {
             return false;
            }
    }
}

int main()
{
    int bills[100];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&bills[i]);
    }
    int size = sizeof(bills);
    bool result = lemonadeChange(bills, size);
    printf("%s\n", result ? "true" : "false");
    return 0;
}
