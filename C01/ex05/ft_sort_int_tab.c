void    ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i;

    temp = 0;
    i = 0;
     while (i < size)
     {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;

     }
     
    

}

#include <stdio.h>
int main()
{
    int tab[] = {9, 2 , 7, 2, 5, 2, 0};
    int i = 0;
    int j = 0;

    while ( i < 7)
    {
         printf("%d ", tab[i]);
         i++;
    }
    ft_sort_int_tab(tab, 7);
    printf("\n");
    
    while (j < 7)
    {
         printf("%d ", tab[j]);
         j++;
    }
}