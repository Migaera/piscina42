/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:32:59 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/09 14:10:22 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);

void ft_validate(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "Ingrese un número válido", 27);

	}
}

void	ft_draw(int x, char first, char mid, char last)
{
	int	cont_fil;

	cont_fil = 0;
	while (cont_fil < x)
	{
		if (cont_fil == 0)
		{
			ft_putchar(first);
		}
		else if (cont_fil == x - 1)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(mid);
		}
		cont_fil++;
	}
}

void	rush(int x, int y)
{
	
	ft_validate(x,y);
	int	cont_col;

	cont_col = 0;
		while (cont_col < y && x > 0)
		{
			if (cont_col == 0)
			{
				ft_draw(x, '/', '*', '\\');
			}
			else if (cont_col == y - 1)
			{
				ft_draw(x, '\\', '*', '/');
			}
			else
			{
				ft_draw(x, '*', ' ', '*');
			}
			cont_col++;
			write(1, "\n", 1);
		}
	}
