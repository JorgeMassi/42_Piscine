/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapa.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:02:30 by joao-per          #+#    #+#             */
/*   Updated: 2022/07/20 23:02:35 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAPA_H
# define MAPA_H

typedef struct parametros_mapa
{
	int		linhas;
	int		colunas;
	int		tamanho;
	char	vazio;
	char	obstaculos;
	char	preencher;
}				t_parametros_mapa;

typedef struct localizacao_mapa
{
	int	x;
	int	y;
	int	ponto;
}				t_localizacao_mapa;

#endif
