/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:46:58 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/02 20:43:09 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	dl = 0;
	sl = 0;
	while (dest[dl])
		dl++;
	while (src[sl])
		sl++;
	if (size == 0)
		return (sl);
	else if (dl >= size)
		return (size + sl);
	while (i < size - dl - 1 && src[i])
	{
		dest[i + dl] = src[i];
		i++;
	}
	dest[dl + i] = '\0';
	return (dl + sl);
}
