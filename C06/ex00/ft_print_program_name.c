/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:17:23 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/24 15:25:11 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{	
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i])
		{
			write(1, &argv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
