#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                write(1, &str[i], 1);
                i++;
        }
}

int     main(int argc, char *argv[])
{
        int     n;
        int     i;

        n = argc;
        i = 1;
        while (i < n)
        {
                ft_putstr(argv[n - i]);
                ft_putstr("\n");
                i++;
        }
}