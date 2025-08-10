#include <stdio.h>

int	main(void)
{
	int i = 1;
	while (++i <= 5)
	printf("%d", i++);
	printf("\n");
	return (0);
}

/* Output
c1r1s1% cc q03.c
c1r1s1% ./a.out
24
c1r1s1% */