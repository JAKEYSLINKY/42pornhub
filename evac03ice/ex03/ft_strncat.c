/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:50:03 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/21 17:16:24 by sutrithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s1 = "char"
// s2 = "hell"
// n = 2
//
// out :
// out = "charhe"
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <unistd.h>
#include <stdio.h>
int main()
{
	char s1[100] = "char ";
	char s2[] = "hell";
	ft_strncat(s1, s2, 2);
	
	printf("%s", s1);
}
