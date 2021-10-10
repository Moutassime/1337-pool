/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseiv <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:43:52 by eseiv             #+#    #+#             */
/*   Updated: 2021/09/24 11:48:11 by eseiv            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	compteur;

	compteur = 'a';
	while (compteur <= 'z')
	{
		write(1, &compteur, 1);
		compteur++;
	}
}
