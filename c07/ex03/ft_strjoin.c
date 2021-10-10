/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:21:19 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/09 16:00:44 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

char	*i_srtrcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

int	calcul_longueur(int size, char **strs, char *sep)
	{
	int	i;
	int	j;
	int	len;
	int	sep_len;

	len = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
			len++;
	}
	sep_len = 0;
	while (*(sep++))
		sep_len++;
	return (len + (size - 1) * sep_len + 1);
}	

char	*ft_strjoin(int size, char **strs, char*sep)
	{
	char			*res;
	char			*racine;
	int				len;
	int				i;
	char			*tmp;

	if (size == 0)
	{
		res = malloc(1);
		*res = 0;
		return (res);
	}
	len = calcul_longueur(size, strs, sep);
	res = malloc(len);
	racine = res;
	res[len - 1] = 0;
	i = -1;
	while (++i < size)
	{
		tmp = res;
		res = i_srtrcpy(res, strs[i]);
		if (i != size - 1)
			res = i_srtrcpy(res, sep);
	}
	return (racine);
}

/*int main(void)
{


char *strs[3];
strs[0]="hello";
strs[1]="back";
strs[2]="myfriend";

printf("%s\n",ft_strjoin(3 , strs,"||"));
}
*/
