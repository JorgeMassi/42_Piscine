/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:01:20 by jorgrodr          #+#    #+#             */
/*   Updated: 2022/07/06 12:24:00 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		a = tab[i];
		tab [i] = tab [j];
		tab[j] = a;
		i++;
		j--;
	}
}
