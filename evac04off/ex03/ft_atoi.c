/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natharav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:01:20 by natharav          #+#    #+#             */
/*   Updated: 2022/10/20 19:21:13 by natharav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_whitespaces(char *str, int *locate)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	*locate = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = ft_whitespaces(str, &i);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		result = result * 10;
		result = result + str[i] - 48;
		i++;
	}
	result = result * sign;
	return (result);
}
