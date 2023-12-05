/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:46:25 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/13 11:07:51 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = {31};
	int	count;
	int	res;

	count = 0;
	while(str[count] != '\0')
	{
		printf("%c", str[count]);
		count++;
	}

	res = ft_str_is_printable(str);
	printf("%d", res);
}*/
