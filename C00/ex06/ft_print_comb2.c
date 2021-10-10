/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 10:34:45 by eseiv             #+#    #+#             */
/*   Updated: 2021/09/24 12:00:42 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;	
	int	b;	

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			if (a != b)
			{
				ft_putchar((a / 10) + 48);
				ft_putchar((a % 10) + 48);
				ft_putchar(' ');
				ft_putchar((b / 10) + 48);
				ft_putchar((b % 10) + 48);
				if (!(a == 98 && b == 99))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
