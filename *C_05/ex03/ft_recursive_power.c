/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:41:32 by jorgrodr          #+#    #+#             */
/*   Updated: 2022/07/18 15:52:53 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power -1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}

/*int	main(void)
{
	printf("%i", ft_recursive_power(3, 4));
}*/
