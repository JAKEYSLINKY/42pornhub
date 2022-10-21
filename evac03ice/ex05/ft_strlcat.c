/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:03:39 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/21 17:28:08 by sutrithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i + size + 1);
}
#include <unistd.h>
#include <stdio.h>
int main()
{
	char s1[100] = "defdef";
	char s2[] = "python";
	// defdefpyt
	// 6 + 3 = 9
	int l = 	ft_strlcat(s1, s2, 9);
	
	printf("LEN : %d ", l);
	printf("%s", s1);
}
