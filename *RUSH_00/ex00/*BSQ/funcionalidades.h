/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcionalidades.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:21:52 by joao-per          #+#    #+#             */
/*   Updated: 2022/07/20 22:50:49 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCIONALIDADES_H
# define FUNCIONALIDADES_H

# include "mapa.h"

char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_strncat(char *dest, char *src, int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	mensagem_erro(void);
char	*ler_ficheiro(int fd, t_parametros_mapa *parametro);
int		**converter_mapa(char *grelha, t_parametros_mapa *parametro);
int		**calcular_quadrado(int **mapa, t_parametros_mapa parametro);

#endif
