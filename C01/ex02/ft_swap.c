void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
    
    }
/*
#include <stdio.h>
int main(void)
{

    int a;
    int b;

    a = 1;
    b = 2;
    printf("3%d\n", a);
    printf("3%d\n", b);
    //printf("3%d\n", temp);
    printf("\n");
    ft_swap(&a, &b);
    printf("3%d\n", a);
    printf("3%d\n", b);
    //printf("3%d\n", temp);
} */