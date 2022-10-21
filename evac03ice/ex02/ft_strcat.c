/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:36:09 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/21 17:13:56 by sutrithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	//char *sss = "catcat\0"
	//dest = "char"
	while (dest[i] != '\0')
	{
		i++;
	}
	// i= 4

	j = 0;
	// src = "hell\0"
	while (src[j] != '\0')
	{
		// dest[4] = src[0]
		dest[i] = src[j];
		i++;
		j++;
	}
	// i = 8;
	dest[i] = '\0';
	return (dest);
}
#include <unistd.h>
#include <stdio.h>
int main()
{
	char s1[100] = "char";
	char s2[] = "hell";
	ft_strcat(s1, s2);
	
	printf("%s", s1);
}
