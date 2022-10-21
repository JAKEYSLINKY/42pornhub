/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:05:43 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/21 17:20:01 by sutrithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[j + i])
		{
			if (to_find[j + 1] == '\0')
			{
				return (to_find);
			}
			j++;
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	const char *largestring = "Foo Bar Baz";
   const char *smallstring = "Bar";
   char *ptr;

   ptr = strstr(largestring, smallstring);
   printf("%s", ptr);
//	char *str = "1234567890";
//	char *to_find = "6789";

//	printf ("%s", ft_strstr(str, to_find));
}
