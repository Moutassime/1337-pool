/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:10:41 by eseiv             #+#    #+#             */
/*   Updated: 2021/09/27 12:02:56 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	debut_ltrr;

	i = 0;
	debut_ltrr = 1;
	while (str[i])
	{
		if (is_alphanumeric(str[i]))
		{
			if (debut_ltrr && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!debut_ltrr && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			debut_ltrr = 0;
		}
		else
			debut_ltrr = 1;
		i++;
	}
	return (str);
}
