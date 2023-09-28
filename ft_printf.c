/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:23:26 by eluno-la          #+#    #+#             */
/*   Updated: 2023/09/28 18:56:20 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_printargs(va_list args, const char c)
{
	int	len_arg;

	len_arg = 0;
	if (c == 'c')
		len_arg += ft_printchar(va_arg(args, int));
	else if (c == 's')
		len_arg += ft_print_str(va_arg(args, char *));
	else if (c == 'i' || c == 'd')
		len_arg += ft_print_integer(va_arg(args, int));
	else if (c == 'u')
		len_arg += ft_print_integer_unsig(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		len_arg += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == 'p')
		len_arg += ft_print_pointer(NULL, va_arg(args, void *));
	else if (c == '%')
		len_arg += ft_printchar('%');
	return (len_arg);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, str);
	i = 0;
	len = 0;
	if ((ft_strlen(str) == 1) && str[i] == '%')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1])
		{
			len += ft_printargs(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

int	main(void)
{
	char	*s;
	int		count1;
	int		c;
	int		count2;

	s = "%";
	c = 'O';
	count1 = printf("%s \n", s);
	printf("la función printf retorna %d\n", count1);
	count2 = ft_printf("%s \n", s);
	ft_printf("la función ft_printf retorna %d\n", count1);
	return (0);
}
