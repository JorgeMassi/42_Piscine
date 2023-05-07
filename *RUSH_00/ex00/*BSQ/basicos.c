/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basicos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:19:46 by joao-per          #+#    #+#             */
/*   Updated: 2022/07/20 22:50:13 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcionalidades.h"
#include <unistd.h>

//escrever caracter a caracter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//ver quantos caracteres tem uma frase

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
//escrever uma frase de uma vez

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
//transformar string em int

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	negativo;

	i = 0;
	nb = 0;
	negativo = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\n' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		negativo = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		nb *= 10;
		nb += ((int)str[i] - 48);
		i++;
	}
	if (negativo == 1)
		return (-nb);
	else
		return (nb);
}
//por o numero

void	ft_putnbr(int nb)
{
	long int	nbr_longo;

	nbr_longo = nb;
	if (nbr_longo < 0)
	{
		ft_putchar('-');
		nbr_longo = -nbr_longo;
	}
	if (nbr_longo >= 10)
	{
		ft_putnbr(nbr_longo / 10);
	}
	ft_putchar('0' + nbr_longo % 10);
}
