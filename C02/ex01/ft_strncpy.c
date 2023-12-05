/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:37:14 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/16 19:34:22 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/*int	main(void)
{
	char	a;
	char	*dest;
	dest = &a;
	int	count;
	count = 0;
	char	src[] = "hola";
	unsigned int n = 4;

	ft_strncpy(dest, src, n);
	while(dest[count] != '\0')
	{
		printf("%s", dest);
		count++;
	}
}*/
