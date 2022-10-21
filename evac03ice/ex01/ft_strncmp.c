/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:54:38 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/21 17:29:39 by sutrithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	c;
	//char	c;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			printf("s1 = %c\t", s1[i]);
			printf("s2 = %c\n", s2[i]);
			c = s1[i] - s2[i];
			printf("dff = %d\n", c);
			return (c);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char *s1 = "hell";
	char *s2 = "hello";

	printf("value of \\0 in unsinged char is : %c %d", (unsigned char)-1, (unsigned char)-1);
	printf("%d", ft_strncmp(s1, s2, 5));
}
