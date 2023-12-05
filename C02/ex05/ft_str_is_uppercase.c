/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:11:21 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/12 19:41:29 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'Z')
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int	main(void)
{
	int	count;
	char	*array = "AIB";
	int	res;

	count = 0;
	while(array[count] != '\0')
	{
		printf("%c\n", array[count]);
		count++;
	}
	
	res = ft_str_is_uppercase(array);
	printf("%d\n", res);
}*/
