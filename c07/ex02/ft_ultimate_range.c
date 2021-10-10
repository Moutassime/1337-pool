/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 09:01:55 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/06 10:45:32 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	lg;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	lg = max - min;
	*range = (int *)malloc(sizeof(int) * (lg + 1));
	while (i < lg)
	{
		range[0][i] = min + i;
		i++;
	}
	range[0][i] = 0;
	return (i);
}
/*int main(){

	int *range;
	printf("%d", ft_ultimate_range(&range,2,7));
}
*/
