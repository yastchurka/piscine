void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

// #include <stdio.h>
// int main(void)
// {
//     // int a;
//     // int b;
//     int div;
//     int mod;

//     ft_div_mod(10, 15, &div, &mod);

//     printf("%d :value of a div\n", div);
//     printf("%d :value of a mod\n", mod);
// }