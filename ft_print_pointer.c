/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:05:46 by eluno-la          #+#    #+#             */
/*   Updated: 2023/10/05 19:04:48 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_pointer(unsigned long long num)
{
	printf("Ptr value: %p\n", (void *) num);
	printf("Ptr address: %p\n", &num);
	return (0);
}

/*int	main(void)
{
	unsigned long long	ptr_value = x34567;
	ft_print_pointer(ptr_value);
	return (0);
}*/
