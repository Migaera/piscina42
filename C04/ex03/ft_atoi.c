/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:57:07 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/20 16:39:28 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	y;
	int	num;

	i = 0;
	y = 0;
	num = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			y++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if (y % 2 != 0 && num != 0)
		num = num * -1;
	return (num);
}

/*int	main(void)
{
	int	res;
	
	res = ft_atoi(" ---+--+aaa1234ab567");
	printf("%d", res);
}*/
