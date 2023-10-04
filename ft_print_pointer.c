/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:05:46 by eluno-la          #+#    #+#             */
/*   Updated: 2023/10/04 17:41:56 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_print_pointer(const char *format, void *ptr)
{
	if (format == NULL)
	{
		return (-1);
	}
	printf("Ptr value: %p\n", ptr);
	printf("Ptr address: %p\n", &ptr);
	return (0);
}

/*int	main(void)
{
	const char	*format;
	int			value;
	int			result;

	format = "This is a format string";
	value = 42;
	printf("Calling ft_print_pointer with format string and integer pointer:\n");
	result = ft_print_pointer(format, &value);
	if (result == 0)
	{
		printf("ft_print_pointer executed succesfully.\n");
	}
	else
	{
		printf("ft_print_pointer encountered an error.\n");
	}
	return (0);
}*/
