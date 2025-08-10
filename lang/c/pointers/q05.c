#include <stdio.h>

void	func(int *x)
{
	x -= 5;
}

int	main(void)
{
	int k = 7;
	func(&k);
	printf("%d\n", k);
	return (0);
}

/* Output
c1r1s1% cc q05.c
c1r1s1% ./a.out
7
c1r1s1% */