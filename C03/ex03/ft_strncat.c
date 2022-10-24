/*
#include <stdio.h>
#include <string.h>
*/
int     ft_strlen(char *str)
{
        int     len;

        len = 0;
        while (str[len] != '\0')
        {
                len++;
        }
        return (len);
}

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
        unsigned int    dest_len;
        unsigned int    i;

        dest_len = ft_strlen(dest);
        i = 0;
        while (src[i] != '\0' && i < nb)
                {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest);
}