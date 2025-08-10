#include <stdio.h>

int	main(void)
{
	int i, even_sum = 0;
	for (i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			even_sum = even_sum + i;
	}
	printf("%d\n", even_sum);
	return (0);
}

/* Output
c1r1s1% cc q01.c
c1r1s1% ./a.out
6
c1r1s1% */