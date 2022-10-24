#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
        int     ans;

        ans = 1;
        if (nb == 0)
        {
                return (1);
        }
        else if (nb > 0)
        {
                while (nb >= 1)
                {
                        ans = ans * nb;
                        nb--;
                }
                return (ans);
        }
        return (0);
}
/*
int     main(void)
{
        int     nb = 4;
        printf("%d\n", ft_iterative_factorial(nb));
}
*/