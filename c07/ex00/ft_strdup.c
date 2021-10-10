/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:11:32 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/09 15:55:32 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	size = 0;
	while (src[size])
		size++;
	dest = malloc(sizeof(char) * (size + 1));
	i = 0;
	if (dest)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
/*int main()
{
    printf("%s", ft_strdup("jdfdjfjf"));
}
*/
