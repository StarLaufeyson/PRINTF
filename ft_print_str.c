/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:52:11 by eluno-la          #+#    #+#             */
/*   Updated: 2023/10/05 18:34:29 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"
// //siempre en printf hemos comentar el null de esta forma
int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	*sentence;
	int		length;

	sentence = "I am Klaus Mikaelson!";
	length = ft_print_str(sentence);
	return (0);
}*/
