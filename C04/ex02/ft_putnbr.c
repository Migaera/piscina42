/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:36:28 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/22 21:44:44 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb <= 9)
		{
			ft_putchar('0' + nb);
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putchar('0' + nb % 10);
		}
	}	
}
int	main(void)
{
	ft_putnbr(42);
}
