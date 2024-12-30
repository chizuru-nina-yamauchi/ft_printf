#include "ft_printf.h"
#include "stdio.h"

int	main()
{
	int	a = 42;
	
	// Basic test case
	ft_printf("Hi, it took a lot of time to finish this project %s, %u, %x, %X, %p, %%\n", "Naruto", 1234566, 123456, 123456, &a);
	printf("Hi, it took a lot of time to finish this project %s, %u, %x, %X, %p, %%\n", "Naruto", 1234566, 123456, 123456, &a);
	
	// Edge case 1: print zero
	int zero = 0;
	ft_printf("Zero: %d, %x, %X, %p\n", zero, zero, zero, &zero);
	printf("Zero: %d, %x, %X, %p\n", zero, zero, zero, &zero);
	
	// Edge case 2: print negative int(I can compile only with 'negaive_int' for the pointer with ft_printf, but printf complained. Need to be debugging??)
	int negative_int = -12736554;
	ft_printf("Negative: %d, %x, %X, %p\n", negative_int, negative_int, negative_int, (void *)&negative_int);
	printf("Negative: %d, %x, %X, %p\n", negative_int, negative_int, negative_int, (void *)&negative_int);
	
	// Edge case 3: large unsigned value
	unsigned int large_unsigned = 667467238;
	ft_printf("Large unsigend: %u, %x, %X\n", large_unsigned, large_unsigned, large_unsigned);
	printf("Large unsigend: %u, %x, %X\n", large_unsigned, large_unsigned, large_unsigned);
	
	// Edge case 4: Print 'NULL' pointer
	ft_printf("NULL pointer: %p\n", NULL);
	printf("NULL pointer: %p\n", NULL);
	
	// Edge case 5: Print large pointer address
	unsigned long long big_address = (unsigned long long)0x7fffd6cbcbf0;
	ft_printf("Large pointer: %p\n", (void*)big_address);
	printf("Large pointer: %p\n", (void*)big_address);

	// Edge case 6: Empty string
	char *empty_str = "";
	ft_printf("Empty string: %s\n", empty_str);
	printf("Empty string: %s\n", empty_str);

	// Edge case 7: Print very long string
	char *long_str = "This is a very long string to test the behavior of ft_printf with large inputs, potentially overflowing buffers!";
	ft_printf("Long string: %s\n", long_str);
	printf("Long string: %s\n", long_str);

	// Edge case 8: Print special characters in string
	ft_printf("Special characters: %s\n", "Hello\tWorld\nNewLine");
	printf("Special characters: %s\n", "Hello\tWorld\nNewLine");

	// Edge case 9: Print percentage sign %%
	ft_printf("Percentage: %%\n");
	printf("Percentage: %%\n");

	/*
	// Edge case 10: Print large negative number
	long long large_negative = -9223372036854775807;
	ft_printf("Large negative: %lld\n", large_negative);
	printf("Large negative: %lld\n", large_negative);
	*/
	
	// Edge case 11: Print unsigned with 0 as the value
	unsigned int zero_unsigned = 0;
	ft_printf("Unsigned zero: %u\n", zero_unsigned);
	printf("Unsigned zero: %u\n", zero_unsigned);

	// Edge case 12: Print pointer with a very small address
	ft_printf("Pointer with small address: %p\n", (void*)0x1);
	printf("Pointer with small address: %p\n", (void*)0x1);
	
	return 0;

}
