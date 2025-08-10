#include <stdio.h>

int	main(void)
{
	int x = 123;
	int sum = 0;
	while (x > 0)
	{
		sum += x % 10;
		x = (x - x % 10) / 10;
	}
	printf("%d\n", sum);
	return (0);
}

/* Output
c1r1s1% cc q02.c
c1r1s1% ./a.out
6
c1r1s1% */