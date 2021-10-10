/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:02:26 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/06 17:36:31 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		seiv;
	int		permut;

	seiv = 0;
	while (seiv <= size - 1)
	{
		permut = tab[seiv];
		tab[seiv] = tab[size - 1];
		tab[size - 1] = permut;
		seiv++;
		size--;
	}
}
