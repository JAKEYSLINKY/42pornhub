#include <stdio.h>

int     ft_sqrt(int nb)
{
        int                     start;
        long long       mid;
        int                     end;

        start = 0;
        end = nb;
        while (start <= end)
        {
                mid = (start + end) / 2;
                if (mid * mid == nb)
                        return (mid);
                else if (mid * mid < nb)
                        start = mid + 1;
                else if (mid * mid > nb)
                        end = mid - 1;
        }
        return (0);
}