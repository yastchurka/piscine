void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a;
    mod = *b;

    *a = div / mod;
    *b = div % mod;
}
/*
#include <stdio.h>
int main(void)
{
    int a;
    int b;

    a = 5;
    b = 2;
    printf("%d\n", a);
    printf("%d\n", b);
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
}*/