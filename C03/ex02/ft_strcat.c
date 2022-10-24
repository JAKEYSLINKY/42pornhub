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

char    *ft_strcat(char *dest, char *src)
{
        int     i;
        int     dest_len;

        dest_len = ft_strlen(dest);
        i = 0;
        while (src[i] != '\0')
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest);
}   