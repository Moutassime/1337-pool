/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 06:55:12 by eseiv             #+#    #+#             */
/*   Updated: 2021/09/24 11:50:19 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	compteur;

	compteur = 'z';
	while (compteur >= 'a')
	{
		write(1, &compteur, 1);
		compteur--;
	}
}
