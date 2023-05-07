/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basicos2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:40:42 by joao-per          #+#    #+#             */
/*   Updated: 2022/07/20 22:50:21 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//conectar frases
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

//conectar frases com limite
char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	len;

	len = 0;
	while (dest[len] != '\0')
		len++;
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

//mensagem de erro a ser exibida
void	mensagem_erro(void)
{
	write(2, "map error\n", 10);
}
