#include "stdio.h"

void get_subset(int s, int n)
{
    int mask = 1;
    printf("{ ");
    int i;
    for (i = 1; i <= n; i++)
    {
        if ((mask & s) > 0)
        {
            printf("%d ", i);
        }
        mask = mask << 1;
    }
    printf("}\n");
}

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    int s;
    for (s = 0; s < (1<<n); ++s)
    {
        get_subset(s, n);
    }

    return 0;
}