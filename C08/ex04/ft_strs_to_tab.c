/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:54:28 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/27 11:27:49 by pauescob         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;
	int		i;

	len = ft_strlen(src);
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	char	*aux;
	int		i;

	aux = (char *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (aux == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		aux[i].size = ft_strlen(av[i]);
		aux[i].str = av[i];
		aux[i].copy = ft_strdup(av[i]);
		i++;
	}
	aux[i].str = 0;
	return (aux);
}
