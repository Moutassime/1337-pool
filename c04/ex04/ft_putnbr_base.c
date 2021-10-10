/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:05:35 by eseiv             #+#    #+#             */
/*   Updated: 2021/10/06 10:15:09 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_length(char *base)
{
	int	len;
	int	j;

	if (!*base || !*(base + 1))
		return (0);
	len = -1;
	while (base[++len])
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		j = len;
		while (base[++j])
		{
			if (base[len] == base[j])
				return (0);
		}
	}
	return (len);
}

void	ft_putnbr_base(int nb, char *base)
{
	long	nbr;
	int		base_len;

	base_len = base_length(base);
	if (!base_len)
		return ;
	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < base_len)
	{
		ft_putchar(base[nbr]);
		return ;
	}
	ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}
