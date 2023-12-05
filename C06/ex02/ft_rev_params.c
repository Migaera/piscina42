/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:07:21 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/25 12:29:39 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc > 0)
	{
		i = argc - 1;
		while (i >= 1)
		{
			j = 0;
			while (argv[i][j])
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
}
