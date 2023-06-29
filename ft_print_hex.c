/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:22:49 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/29 19:25:23 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	ft_print_hex(unsigned int num)
{
	if (num > 15)
	{
		ft_print_hex(num / 16);
		ft_print_hex(num % 16);
	}
	else if (num < 10)
		ft_printchar(num + '0');
	else
		ft_printchar(num - 10 + 'a');
}

int	main(void)
{
	ft_print_hex(255);
	return (0);
}
