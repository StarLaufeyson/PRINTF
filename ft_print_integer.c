/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:24:46 by eluno-la          #+#    #+#             */
/*   Updated: 2023/07/07 17:56:37 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_printchar(char c);

int	ft_print_integer(int num)
{
	if (num == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		ft_print_integer(147483648);
	}
	else if (num < 0)
	{
		ft_printchar('-');
		num = -num;
		ft_print_integer(num);
	}
	else if (num > 9)
	{
		ft_print_integer (num / 10);
		ft_print_integer (num % 10);
	}
	else
		ft_printchar(num + 48);
}

int	main(void)
{
	ft_print_integer(-3456);
	return (0);
}
