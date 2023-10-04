/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 19:22:49 by eluno-la          #+#    #+#             */
/*   Updated: 2023/10/04 17:42:17 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

/*el uso de 'x' significa que deseas utilizar a, b, c, d, e y f
		xa representar los digitos hexadecimales. para ello se utilizará 
		la cadena "0123456789abcdef" para obtener el digito hexadecimal 
		correspondiente a 'n % 16'*/
int	ft_print_hex(unsigned long long num, char c)
{
	unsigned int	i;

	i = 0;
	if (num < 16)
	{
		if (c == 'x')
			i += ft_printchar("0123456789abcdef"[num % 16]);
		else
			i += ft_printchar("0123456789ABCDEF"[num % 16]);
	}
	else
	{
		i += ft_print_hex(num / 16, c);
		if (c == 'x')
			i += ft_printchar("0123456789abcdef"[num % 16]);
		else
			i += ft_printchar("0123456789ABCDEF"[num % 16]);
	}
	return (i);
}

/*int	main(void)
{
	int		num;
	char	c;
	int		length_num;

	num = 255;
	c = 'x';
	length_num = ft_print_hex(num, c);
	return (0);
}*/
