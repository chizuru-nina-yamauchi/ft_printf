#include "ft_printf.h"
#include "stdio.h"

int	main()
{
	int	a = 42;
	ft_printf("Hi, it took a lot of time to finish this project %s, %u, %x, %X, %p, %%\n", "Naruto", 1234566, 123456, 123456, &a);
	printf("Hi, it took a lot of time to finish this project %s, %u, %x, %X, %p, %%\n", "Naruto", 1234566, 123456, 123456, &a);
	return 0;

}
