/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skaewpan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:33:40 by skaewpan          #+#    #+#             */
/*   Updated: 2022/10/20 01:01:06 by skaewpan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		argv++;
		ft_putstr(*argv);
		argc--;
	}
	return (0);
}
