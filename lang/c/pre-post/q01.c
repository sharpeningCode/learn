#include <stdio.h>

int	main(void)
{
	int x = 2, y, z;
	y = x++;
	z = ++x;
	printf("%d %d %d\n", x, y, z);
	return (0);
}

/* Output
c1r1s1% cc q01.c
c1r1s1% ./a.out
4 2 4
c1r1s1% */