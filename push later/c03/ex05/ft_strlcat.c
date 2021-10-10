/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:02:55 by eseiv             #+#    #+#             */
/*   Updated: 2021/09/27 16:03:19 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				limit;
	unsigned int	dest_size;
	unsigned int	src_size;

	if (dest && src)
	{
		src_size = ft_strlen(src);
		dest_size = ft_strlen(dest);
		if (dest_size >= size || !size)
			return (size + src_size);
		i = 0;
		limit = size - dest_size - 1;
		while (src[i] && i < limit)
		{
			dest[dest_size + i] = src[i];
			i++;
		}
		dest[dest_size + i] = '\0';
		return (dest_size + src_size);
	}
	else
		return (0);
}
