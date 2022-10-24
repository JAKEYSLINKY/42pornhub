#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
        int     ans;

        ans = 1;
        if (nb == 0)
                return (1);
        else if (nb < 0)
        {
                return (0);
        }
        else
                return (nb * ft_recursive_factorial(nb - 1));
}
/*
int     main(void)
{
        int     nb = 4;
        printf("%d\n", ft_recursive_factorial(nb));
}
*/