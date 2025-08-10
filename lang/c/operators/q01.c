#include <stdio.h>

int	main(void)
{
	for (int i = 0; i == i; i++)
	{
		if (i > 3 || i < 4)
		{
			printf("%d", i);
			break ;
		}
	}
	printf("\n");
	return (0);
}

/* Output
c1r1s1% cc q01.c
c1r1s1% ./a.out
0
c1r1s1% */