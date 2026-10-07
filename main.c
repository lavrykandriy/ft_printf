#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	test_section(const char *title)
{
	printf("\n=========================================\n");
	printf("  %s\n", title);
	printf("=========================================\n");
}

int	main(void)
{
	char *ptr = (char *)NULL;
	int	res_ft;
	int	res_og;

	// 1. CARACTERES (%c)
	test_section("1. PRUEBAS DE CARACTERES (%c)");
	res_ft = ft_printf("ft_printf : [%c] [%c] [%c]\n", 'a', 'Z', '\0');
	res_og =    printf("printf    : [%c] [%c] [%c]\n", 'a', 'Z', '\0');
	printf("-> Retorno: ft_printf = %d | printf = %d\n", res_ft, res_og);

	// 2. CADENAS DE CARACTERES (%s)
	test_section("2. PRUEBAS DE CADENAS (%s)");
	res_ft = ft_printf("ft_printf : [%s] [%s] [%s]\n", "Hola 42", "", ptr);
	res_og =    printf("printf    : [%s] [%s] [%s]\n", "Hola 42", "", ptr);
	printf("-> Retorno: ft_printf = %d | printf = %d\n", res_ft, res_og);

	// 3. ENTEROS CON SIGNO (%d / %i)
	test_section("3. PRUEBAS DE ENTEROS (%d / %i)");
	res_ft = ft_printf("ft_printf : [%d] [%i] [%d] [%i] [%d]\n", 0, 42, -42, INT_MAX, INT_MIN);
	res_og =    printf("printf    : [%d] [%i] [%d] [%i] [%d]\n", 0, 42, -42, INT_MAX, INT_MIN);
	printf("-> Retorno: ft_printf = %d | printf = %d\n", res_ft, res_og);

	// 4. ENTEROS SIN SIGNO (%u)
	test_section("4. PRUEBAS DE UNSIGNED INT (%u)");
	res_ft = ft_printf("ft_printf : [%u] [%u] [%u] [%u]\n", 0, 42, -42, UINT_MAX);
	res_og =    printf("printf    : [%u] [%u] [%u] [%u]\n", 0, 42, -42, UINT_MAX);
	printf("-> Retorno: ft_printf = %d | printf = %d\n", res_ft, res_og);

	// 5. HEXADECIMAL (%x / %X)
	test_section("5. PRUEBAS DE HEXADECIMAL (%x / %X)");
	res_ft = ft_printf("ft_printf : [%x] [%X] [%x] [%X]\n", 0, 255, 3735928559U, 3735928559U);
	res_og =    printf("printf    : [%x] [%X] [%x] [%X]\n", 0, 255, 3735928559U, 3735928559U);
	printf("-> Retorno: ft_printf = %d | printf = %d\n", res_ft, res_og);

	// 6. PUNTEROS (%p)
	test_section("6. PRUEBAS DE PUNTEROS (%p)");
	int a = 42;
	res_ft = ft_printf("ft_printf : [%p] [%p]\n", &a, NULL);
	res_og =    printf("printf    : [%p] [%p]\n", &a, NULL);
	printf("-> Retorno: ft_printf = %d | printf = %d\n", res_ft, res_og);

	// 7. PORCENTAJE (%%)
	test_section("7. PRUEBAS DE PORCENTAJE (%%)");
	res_ft = ft_printf("ft_printf : [%%] [%%%%] [%%s]\n");
	res_og =    printf("printf    : [%%] [%%%%] [%%s]\n");
	printf("-> Retorno: ft_printf = %d | printf = %d\n", res_ft, res_og);

	// 8. COMBINACIONES Y TEXTO MEZCLADO
	test_section("8. PRUEBAS COMBINADAS");
	res_ft = ft_printf("ft_printf : Num: %d, Str: %s, Hex: %x, Ptr: %p, Char: %c, %%: %%\n", 100, "42 BCN", 255, &res_ft, 'X');
	res_og =    printf("printf    : Num: %d, Str: %s, Hex: %x, Ptr: %p, Char: %c, %%: %%\n", 100, "42 BCN", 255, &res_ft, 'X');
	printf("-> Retorno: ft_printf = %d | printf = %d\n", res_ft, res_og);

	printf("\n=========================================\n\n");
	return (0);
}
