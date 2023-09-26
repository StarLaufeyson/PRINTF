/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:19:26 by eluno-la          #+#    #+#             */
/*   Updated: 2023/09/26 19:27:42 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer2(unsigned long long num)
{
	return (printf("Valor del ptro: 0x%11x\n", num));
}

int	main(void)
{
	int	num;
	int	*ptr;

	num = 42;
	ptr = &num;
	ft_printpointer2((unsigned long long)ptr);
	return (0);
}
