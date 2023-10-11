/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:24:46 by eluno-la          #+#    #+#             */
/*   Updated: 2023/10/11 14:51:36 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

/*int	ft_print_integer(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		len += 2;
		len += ft_print_integer(147483648);
	}
	else if (num < 0)
	{
		ft_printchar('-');
		num = -num;
		len += 1;
		len += ft_print_integer(num);
	}
	else if (num > 9)
	{
		len += ft_print_integer (num / 10);
		len += ft_print_integer (num % 10);
	}
	else
		ft_printchar(num + '0');
		len++;
	return (len);
}*/
int	ft_print_integer(int num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		if (num == -2147483648)
			return (ft_print_str("-2147483648"));
		ft_printchar('-');
		num *= (-1);
		len++;
	}
	if (num <= 9)
	{
		ft_printchar(num + '0');
		len++;
	}
	else
	{
		len++;
		len += ft_print_integer(num / 10);
		ft_printchar (num % 10 + '0');
	}
	return (len);
}

/*int	main(void)
{
	int	num;
	int	print;

	num = -345678;
	print = ft_print_integer(num);
	printf("Total of characters printed: %d\n", print);
	return (0);
}*/
