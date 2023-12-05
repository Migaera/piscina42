/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:33:46 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/19 10:32:43 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[i] && !s2[i])
			return (s1[i] - s2[i]);
		if (!s1[i] && s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/*int	main(void)
{
	char	*s1 ="H0la";
	char	*s2 ="Hola";
	int	res = ft_strncmp(s1, s2, 3);
	printf("%d", res);
	printf("%c", '\n');
	int	res2 = strncmp(s1, s2, 3);
	printf("%d", res2);
}*/
