/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ler_ficheiro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:02:10 by joao-per          #+#    #+#             */
/*   Updated: 2022/07/20 22:26:53 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "funcionalidades.h"
#include "mapa.h"
#include <unistd.h>
#include <stdlib.h>

char	**asf(void)
{
	char	**array;
	int		i;

	array = malloc(sizeof(char *) * 2);
	if (!array)
		return (0);
	i = 0;
	while (i < 2)
	{
		array[i] = malloc(sizeof(char));
		i++;
	}
	return (array);
}

char	*ler_ate(int fd, char c)
{
	char	**input;
	char	*tmp;
	int		len;

	input = asf();
	len = 0;
	while (read(fd, input[1], 1) > 0 && *input[1] != c)
	{
		len++;
		tmp = input[0];
		input[0] = malloc(sizeof(input[0]) * (++len + 1));
		if (!input[0])
			return (0);
		input[0][0] = '\0';
		ft_strcat(input[0], tmp);
		ft_strncat(input[0], input[1], 1);
		free(tmp);
	}
	input[0][len] = '\0';
	return (input[0]);
}

int	completar_mapa(t_parametros_mapa *mapa, char *parametro)
{
	int		i;
	int		len;
	char	*linhas;

	len = 0;
	while (parametro[len] != '\0')
		len++;
	linhas = (char *)malloc(sizeof(char));
	if (!linhas)
		return (0);
	i = 0;
	while (parametro[i + 3] != '\0')
	{
		linhas[i] = parametro[i];
		i++;
	}
	linhas[i] = '\0';
	mapa->linhas = ft_atoi(linhas);
	mapa->vazio = parametro[i++];
	mapa->obstaculos = parametro[i++];
	mapa->preencher = parametro[i];
	return (1);
}

char	*ler_ficheiro(int fd, t_parametros_mapa *mapa)
{
	int		i;
	char	*tmp;
	char	*str;

	completar_mapa(mapa, ler_ate(fd, '\n'));
	tmp = ler_ate(fd, '\n');
	mapa->colunas = ft_strlen(tmp) + 1;
	if (mapa->linhas <= 0)
		return (0);
	str = (char *)malloc(sizeof(*str) * (mapa->linhas * mapa->colunas));
	if (!str)
		return (0);
	str[0] = '\0';
	ft_strcat(str, tmp);
	str[mapa->colunas - 1] = '\n';
	str += mapa->colunas;
	i = read(fd, str, (mapa->linhas - 1) * mapa->colunas);
	if (i < 0 || i != (mapa->linhas - 1) * mapa->colunas)
		return (0);
	str -= mapa->colunas;
	if (read(fd, tmp, 1) > 0 || str[mapa->linhas * mapa->colunas - 1] != '\n')
		return (0);
	str[mapa->linhas * mapa->colunas - 1] = '\0';
	return (str);
}
