/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 23:41:25 by jorgrodr          #+#    #+#             */
/*   Updated: 2022/07/21 01:38:58 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	total_length(int size, char **strs, char *sep)
{
	int	total_chars;
	int	i;

	total_chars = 0;
	i = 0;
	while (i < size)
	{
		total_chars += ft_strlen(strs[i]);
		total_chars += ft_strlen(sep);
		i++;
	}
	total_chars = total_chars - ft_strlen(sep);
	return (total_chars);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	char	*ptr;
	int		total_chars;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
		total_chars = total_length(size, strs, sep);
		buffer = (char *)malloc((total_chars +1) * sizeof(char));
		ptr = buffer;
	if (ptr == 0)
		return (0);
			i = -1;
	while (++i < size)
	{
		ft_strcpy(buffer, strs[i]);
		buffer = buffer + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(buffer, sep);
			buffer = buffer + ft_strlen(sep);
		}
	}
	*buffer = 0;
	return (ptr);
}

/*#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	int		offset;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	offset = 0;
	while (offset < 3)
	{
		strs[offset] = "abc";
		offset++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}*/
