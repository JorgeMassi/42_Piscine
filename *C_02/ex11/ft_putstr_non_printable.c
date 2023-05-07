/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:05:40 by jorgrodr          #+#    #+#             */
/*   Updated: 2022/07/21 22:23:24 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	return (c > 32 && c < 127);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[(unsigned char) str[i] / 16], 1);
			write(1, &"0123456789abcdef"[(unsigned char) str[i] % 16], 1);
		}
		i++;
	}
}

/*#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 250, 'C',};

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/
