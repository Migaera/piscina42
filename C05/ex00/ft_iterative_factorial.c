/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:16:08 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/20 16:51:46 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (nb >= 1)
	{
		x = nb * x;
		nb--;
	}
	return (x);
}
/*int	main(void)
{
	int res = ft_iterative_factorial(-5);
	printf("%d", res);
}*/
