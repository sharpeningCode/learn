#include <stdio.h>

void	f(int *p, int *q)
{
	p = q;
	*p = 2;
}

int i = 0, j = 1;

int	main(void)
{
	f(&i, &j);
	printf("%d\n", j);
	return (0);
}

/* Output
c1r1s1% cc q08.c
c1r1s1% ./a.out
2
c1r1s1% */