/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:05:46 by eluno-la          #+#    #+#             */
/*   Updated: 2023/09/26 17:10:29 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long num)
{
	int	i;

	i = 0;
	i += ft_print_str("0x");
	i += ft_print_hex(num, 'x');
	return (i);
}

int	main(void)
{
	unsigned long long	ptr_value;
	int					len;

	ptr_value = (unsigned long long)0x7ffebc37ea1c;
	len = ft_print_pointer(ptr_value);
	printf("\nLa longitud total de caracteres impresos: %d\n", len);
	return (0);
}
