#include <stdio.h>

void	swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int a = 21;
	int b = 42;
	swap(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}

/* Output
c1r1s1% cc q02.c
c1r1s1% ./a.out
42, 21
c1r1s1% */