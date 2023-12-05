/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauescob <pauescob@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:55:13 by pauescob          #+#    #+#             */
/*   Updated: 2023/07/16 21:16:17 by pauescob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] += 32;
		}
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag)
				str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*res;
	char	a;
	int		count;

	res = &a;
	res = ft_strcapitalize(str);

	while(res[count] != '\0')
	{
		printf("%c", res[count]);
		count++;
	}
}
*/
