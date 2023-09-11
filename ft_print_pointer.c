#include "ft_printf.h"

int  ft_print_pointer(unsigned long long n)
{
  int  i;

  i = 0;
  //Imprimir "0x"
  i += ft_print_str("0x");
  //Imprimir el valor del ptro en formato hexadecimal
  i += ft_print_hex(n, 'x'); // i = i + ft_print_hex
  return (i);
}

int  main(void)
{
  unsigned long long pointer_value = (unsigned long long)0x7ffebc37ea1c;
  //Imprimir ptro en formato hexadecimal
  int len = ft_print_pointer(pointer_value);
  printf("\nLa longitud total de caracteres impresos: %d\n", len);
  return (0);
}
