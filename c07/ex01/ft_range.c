/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 19:28:09 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/06 10:44:17 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;
	int	l;

	i = 0;
	if (min >= max)
		return (0);
	l = max - min;
	res = malloc(sizeof(int) * l);
	while (i < l)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
/*int main(){

printf("%d",*ft_range(5,7));

}
*/
