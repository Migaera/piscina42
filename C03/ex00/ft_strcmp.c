/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:23:26 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/19 10:33:51 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;
	int	res;

	count = 0;
	while ((s1[count] == s2[count]) && (s1[count] != '\0' || s2[count] != '\0'))
	{
		count++;
	}
	res = s1[count] - s2[count];
	return (res);
}
/*int	main(void)
{
	char	s1[10] = "hola";
	char	s2[10] = "hala";

	int		res = ft_strcmp(s1, s2);
	int		res2 = strcmp(s1, s2);

	printf("%d", res);
	printf("%c", '\n');
	printf("%d", res2);
}*/
