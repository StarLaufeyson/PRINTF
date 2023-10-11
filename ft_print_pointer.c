/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:05:46 by eluno-la          #+#    #+#             */
/*   Updated: 2023/10/11 16:36:08 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_pointer(unsigned long long num)
{
	int	printed;

	printed = ft_print_str("0x");
	printed += ft_print_hex(num, 'x');
	return (printed);
}

/*int	main(void)
{
	unsigned long long	ptr_value;

	ptr_value = 0x34567;
	ft_print_pointer(ptr_value);
	return (0);
}*/
