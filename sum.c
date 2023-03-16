#include <stdio.h>

int soma(int *x, int *y)
{
    (*x)++;
    printf("endereco x= %p, x=%i. endereco y= %p, y=%i\n", x, *x, y, *y);
    return *x + *y;
}

int main()
{
    int x = 10;
    int y = 20;

    printf("%i + %i = %i. O x virou= %i\n", x, y, soma(&x, &y), x);
};