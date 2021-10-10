/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:23:34 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/09 15:50:35 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	solution;
	int	i;

	solution = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		solution *= nb;
		nb--;
	}
	return (solution);
}
