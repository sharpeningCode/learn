#include <stdio.h>

int	recursive(int num)
{
	if (num == 1)
		return (2);
	return (num * recursive(num - 1));
}

int	main(void)
{
	printf("%d", recursive(5));
	printf("\n");
	return (0);
}

/* Output
c1r1s1% cc q01.c
c1r1s1% ./a.out
240
c1r1s1% */