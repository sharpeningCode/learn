#include <stdio.h>

void	func(int *ptr)
{
	*ptr = 30;
}

int	main(void)
{
	int y = 20;
	func(&y);
	printf("%d\n", y);
	return (0);
}

/* Output
c1r1s1% cc q04.c
c1r1s1% ./a.out
30
c1r1s1% */