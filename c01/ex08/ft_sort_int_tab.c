/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 08:03:04 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/06 17:41:28 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	seiv1;
	int	seiv2;
	int	tmp;

	seiv1 = 0;
	while (seiv1 < size)
	{
		seiv2 = seiv1 + 1;
		while (seiv2 < size)
		{
			if (tab[seiv2] < tab[seiv1])
			{
				tmp = tab[seiv1];
				tab[seiv1] = tab[seiv2];
				tab[seiv2] = tmp;
			}
			seiv2++;
		}
		seiv1++;
	}
}
