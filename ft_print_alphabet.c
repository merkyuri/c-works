/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpark <kpark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:56:27 by kpark             #+#    #+#             */
/*   Updated: 2021/04/12 01:32:07 by kpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char alphab;

	alphab = 97;
	while (alphab <= 122)
	{
		write(1, &alphab, 1);
		alphab++;
	}
}
