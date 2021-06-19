/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpark <kpark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:13:12 by kpark             #+#    #+#             */
/*   Updated: 2021/04/11 12:19:55 by kpark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char rev_alpha;

	rev_alpha = 122;
	while (rev_alpha >= 97)
	{
		write(1, &rev_alpha, 1);
		rev_alpha--;
	}
}
