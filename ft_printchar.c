/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:49:51 by eluno-la          #+#    #+#             */
/*   Updated: 2023/06/29 17:55:33 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_printchar(char c)
{
	return (write(1, &c, 1));
}

/*int	main(void)
{
	char	c;
	int		i;

	c = 'a';
	i = ft_printchar(c);
	printf("the integer is: %d", i);
}*/