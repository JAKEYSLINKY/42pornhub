/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:15:17 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/21 16:56:01 by sutrithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	c;
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			c = s1[i] - s2[i];
			printf("s1 : %c, s2: %c\nc[%d] = %d\n", s1[i], s2[i], i,  c);
			return (c);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char *s1 = "asdfgh";
	char *s2 = "123456";

	printf("%d", ft_strcmp(s1, s2));
}

