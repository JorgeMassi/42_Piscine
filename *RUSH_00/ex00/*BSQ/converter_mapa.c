/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_mapa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:58:32 by joao-per          #+#    #+#             */
/*   Updated: 2022/07/20 22:50:44 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mapa.h"
#include <stdlib.h>

void	mapa_aux(int j[2])
{
	j[0] = -1;
	j[1] = 0;
}

int	**converter_mapa(char *grelha, t_parametros_mapa *mapa)
{
	int	a[2];
	int	**data;

	mapa_aux(a);
	data = (int **)malloc(sizeof(*data) * mapa->linhas);
	data[++a[0]] = (int *)malloc(sizeof(**data) * mapa->colunas);
	while (*grelha != '\0')
	{
		if (*grelha == '\n')
		{
			data[++a[0]] = (int *)malloc(sizeof(**data) * mapa->colunas);
			if (((a[1] != mapa->colunas - 1)) || (!data))
				return (0);
			a[1] = 0;
		}
		if (*grelha == mapa->vazio)
			data[a[0]][a[1]++] = -1;
		if (*grelha++ == mapa->obstaculos)
			data[a[0]][a[1]++] = 0;
	}
	if (a[0] != mapa->linhas - 1)
		return (0);
	else
		return (data);
}
