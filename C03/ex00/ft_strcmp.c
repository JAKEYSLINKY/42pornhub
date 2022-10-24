/*
#include <stdio.h>
#include <string.h>
*/
int     ft_strcmp(char *s1, char *s2)
{
        unsigned int    i;
        unsigned char   a;
        unsigned char   b;

        i = 0;
        while (s1[i] != '\0' || s2[i] != '\0')
        {
                a = s1[i];
                b = s2[i];
                if (a == b)
                        i++;
                else
                        return (a - b);
        }
        return (a - b);
}
