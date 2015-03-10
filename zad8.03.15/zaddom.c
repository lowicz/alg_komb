#include "stdio.h"

void get_subset(int s, int n)
{
    unsigned int mask = 1;
    for (int i = 0; i < n; ++i)
    {
        printf("{ ");
        if (mask & s > 0)
        {
            printf("%d, ", i+1);
        }
        mask = mask << 1;
        printf("}\n");
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    unsigned int s;
    for (s = 0; s < ((2^n) - 1); ++s)
    {
        get_subset(s, n);
    }

    return 0;
}