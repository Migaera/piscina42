/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:37:37 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/19 13:20:08 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				len;

	len = ft_strlen(dest) + ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < size && size != 0)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (len);
}
int	main(void)
{
	char	dest[10]= "adios";
	char	src[10]= "hola";

	printf("%d", ft_strlcat(dest, src, 2));
	printf("%c", '\n');
	printf("%s", dest);
}
