#include	"ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str != 0)
		return (write(1, "404 not found", 13));
	while (str[i] != '\0')
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}

int	main(void)
{
	char *sentence = "I'm Klaus Mikaelson!";
	int	length = ft_print_str(sentence);
	return (0);
}