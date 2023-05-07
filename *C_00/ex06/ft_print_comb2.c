/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:55:57 by jorgrodr          #+#    #+#             */
/*   Updated: 2022/07/03 14:44:50 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	while (a++ <= 99)
	{
		b = a;
		while (b++ < 99)
		{
			ft_print((a / 10) + '0');
			ft_print((a % 10) + '0');
			write(1, " ", 1);
			ft_print((b / 10) + '0');
			ft_print((b % 10) + '0');
			if (a != 98)
			{
				write(1, ", ", 2);
			}
		}
	}
}
