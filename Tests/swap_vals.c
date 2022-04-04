#include <stdio.h>

int main()
{
    int a, b;
    printf("a, b: ");
    scanf("%d %d", &a, &b);
    printf("original a, b = %d, %d\n", a, b);
    swap_vals(&a, &b);
    printf("swapped a, b = %d, %d\n", a, b);
    return 0;
}

void swap_vals(x, y)
int *x, *y;
{
    int var;
    var = *x;
    *x = *y;
    *y = var;
}