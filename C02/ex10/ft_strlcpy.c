/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:36:45 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/20 16:26:46 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	r;

	count = 0;
	r = ft_strlen(src);
	if (size != 0)
	{
		while (src[count] != '\0' && count < size - 1)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (r);
}

int	main(void)
{
	char	a;
	char	*dest;
	dest = &a;
	int	count = 0;
	char	src[] = "hola qué tal";
	unsigned int size = 16;
	int	res;

	res = ft_strlcpy(dest, src, size);
	printf("%d", res);
	printf("%s", dest);
}
