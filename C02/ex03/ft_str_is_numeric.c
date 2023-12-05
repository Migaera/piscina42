/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:00:13 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/16 19:50:53 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < '0' || str[count] > '9')
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int	main(void)
{
	char	str [] = {'a', '2', '3', '4'};
	int		res;
	int	count;

	count = 0;

	res = ft_str_is_numeric(str);
	printf("%d\n", res);
	
	while (count < 4)
	{
		printf("%c", str[count]);
		count++;
	}
}
*/
