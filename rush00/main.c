/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:24:05 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/09 14:13:56 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c);
void	draw(int lenght, char first, char mid, char last);
void	ft_validate(int x, int y);
void	rush(int x, int y);

int	main(void)
{
	rush(5,3);
	rush(5,1);
	rush(1,1);
	rush(1,5);
	rush(4,4);
	return (0);
}
