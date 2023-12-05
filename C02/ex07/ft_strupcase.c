/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:08:37 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/16 20:04:53 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] -= 32;
		}
		count++;
	}
	return (str);
}

/*int	main(void)
{
	int	count;
	char	array[] = "abc";
	
	count = 0;
	while(array[count] != '\0')
	{
		printf("%c", array[count]);
		count++;
	}

	printf("%s", ft_strupcase(array));
}
*/
