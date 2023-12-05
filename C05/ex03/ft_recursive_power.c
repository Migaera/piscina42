/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:27:00 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/23 16:54:59 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * (ft_recursive_power(nb, power - 1)));
	return (0);
}
/*int	main(void)
{
	int res = ft_recursive_power(3, 3);
	printf("%d", res);
}*/
