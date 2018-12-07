#include <stdio.h>
int main()
{
    float money, x, i, total;
    money = 14.0;
    x = 12.0;
    total = 0.0;
    for(i=0; i<x; i++)
    {
        money = money + 2.3;
    }
    total = 2*money;
    printf("%f", total);
    return 0;
}
