#include <stdio.h>
#include <math.h>

int     ft_iterative_power(int nb, int power)
{
        int     ans;

        ans = nb;
        if (power < 0)
                return (0);
        else if (nb == 0 && power == 0)
                return (1);
        else if (power == 0)
                return (1);
        else if (power == 1)
                return (nb);
        while (power > 1)
        {
                ans = ans * nb;
                power--;
        }
        return (ans);
}
