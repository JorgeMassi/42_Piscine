/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:21:48 by joao-per          #+#    #+#             */
/*   Updated: 2022/07/20 22:48:48 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mapa.h"
#include "funcionalidades.h"
#include <fcntl.h>
#include <stdlib.h>

void	mostrar_mapa(int **mapa, t_parametros_mapa *parametro)
{
	int		i[2];
	int		k;
	char	*str;

	i[0] = -1;
	str = malloc(sizeof(*str) * parametro->colunas);
	if (!str)
		return ;
	while (++i[0] < parametro->linhas)
	{
		k = 0;
		i[1] = -1;
		while (++i[1] < parametro->colunas - 1)
		{
			if (mapa[i[0]][i[1]] == -1)
				str[k++] = parametro->preencher;
			else if (mapa[i[0]][i[1]] == 0)
				str[k++] = parametro->obstaculos;
			else
				str[k++] = parametro->vazio;
		}
		str[k++] = '\n';
		str[k] = '\0';
		ft_putstr(str);
	}
}

int	auxliar_principal(char *file_path)
{
	int	fd;

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
		mensagem_erro();
	return (fd);
}

int	main(int ac, char **av)
{
	int					i;
	int					fd;
	int					**mapa;
	char				*grelha;
	t_parametros_mapa	parametro;

	i = 0;
	ac--;
	while (i < ac || (ac == 0 && i == 0))
	{
		fd = 0;
		if (ac != 0)
			fd = auxliar_principal(av[++i]);
		if (fd != -1)
		{
			grelha = ler_ficheiro(fd, &parametro);
			mapa = converter_mapa(grelha, &parametro);
			if (!grelha && !mapa)
				mensagem_erro();
			else
				mostrar_mapa(calcular_quadrado(mapa, parametro), &parametro);
		}
	}
	return (0);
}
