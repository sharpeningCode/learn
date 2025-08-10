#include <stdio.h>

int	main(void)
{
	int x = 4, y, z;
	y = --x;
	z = x--;
	printf("%d%d%d\n", x, y, z);
	return (0);
}

/* Output
c1r1s1% cc q02.c
c1r1s1% ./a.out
233
c1r1s1% */