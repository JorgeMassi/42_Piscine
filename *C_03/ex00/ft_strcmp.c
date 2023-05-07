/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgrodr <jorgrodr@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:59:58 by jorgrodr          #+#    #+#             */
/*   Updated: 2022/07/12 17:04:49 by jorgrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main(void) 
{
char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
  int result;

  // comparing strings str1 and str2
  result = ft_strcmp(str1, str2);
  printf("ft_strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strcmp(str1, str3);
  printf("ft_strcmp(str1, str3) = %d\n", result);

  return (0);
}*/
