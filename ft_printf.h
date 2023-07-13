/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluno-la <eluno-la@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:58:27 by eluno-la          #+#    #+#             */
/*   Updated: 2023/07/13 17:54:29 by eluno-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_printchar(char c);
int		ft_print_integer(int num);
int		ft_print_hex(unsigned long long num, char c);
int		ft_printargs(va_list args, const char format);
int		ft_print_integer_unsig(unsigned int num);

#endif  // FT_PRINT_F
