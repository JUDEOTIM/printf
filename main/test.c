#include "main.h"

int main(void)
{
    unsigned int x = 2;

    unsigned int r = x >> 2;

    if (r)
        printf("r is not null\n");
    else
        printf("r is null\n");

    printf("r : %d\n", r);
}
