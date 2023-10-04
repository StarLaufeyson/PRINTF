/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer_unsig.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:40:19 by eluno-la          #+#    #+#             */
/*   Updated: 2023/10/04 17:42:10 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_integer_unsig(unsigned int num)
{
	int	i;

	i = 0;
	if (num <= 9)
	{
		ft_printchar(num + '0');
		i++;
	}
	else
	{
		i++;
		i += ft_print_integer_unsig(num / 10);
		ft_printchar(num % 10 + '0');
	}
	return (i);
}

/*int	main(void)
{
	unsigned int	num;
	int				result;

	num = 123456;
	result = ft_print_integer_unsig(num);
	printf("Number of digits: %d\n", result);
	return (0);
}*/
