#include "conio.h"
#include "stdio.h"
#include "ctype.h"

int main()
{
    int *x, y = 10;

    x = &y;

    printf("Valor: %d\n", *x);

    return 0;
}