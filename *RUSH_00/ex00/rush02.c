/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:05:36 by jorgrodr          #+#    #+#             */
/*   Updated: 2022/07/03 19:12:44 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_horizontal(int x, char esquerda, char meio, char direita)
{
	if (x-- >= 1)
	{
		ft_putchar(esquerda);
		while (x-- >= 2)
			ft_putchar(meio);
		if (x == 0)
			ft_putchar(direita);
		ft_putchar('\n');
	}
}

void	print_vertical(int x, int y, char parede)
{
	int	i;

	while (y-- > 2)
	{
		ft_putchar(parede);
		i = 2;
		while (x > i++)
			ft_putchar(' ');
		if (x > 1)
			ft_putchar(parede);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y >= 1)
	{
		print_horizontal(x, 'A', 'B', 'A');
		print_vertical(x, y, 'B');
		if (y >= 2)
			print_horizontal(x, 'C', 'B', 'C');
	}
}
