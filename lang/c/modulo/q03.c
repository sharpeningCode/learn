#include <stdio.h>

void	f(int a)
{
	for (int i = 1; i <= a/2; i++)
	{
		if (a % i == 0)
			printf("%d", i);
	}
	printf("\n");
}

int	main(void)
{
	f(6);
	return (0);
}

/* Output
c1r1s1% cc q03.c
c1r1s1% ./a.out
123
c1r1s1% */