/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:56:50 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/16 19:58:44 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'a' || str[count] > 'z')
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int	main (void)
{
	int	res;
	char	array [4] = {'a', 'e', 'e', 'u'};
	int	count = 0;

	res = ft_str_is_lowercase(array);
	printf("%d\n", res);

	while(array[count] != '\0')
	{
		printf("%c", array[count]);
		count++;
	}	
}
*/
