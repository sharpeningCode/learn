#include <stdio.h>

int	main(void)
{
	int num = 42;
	int *ptr = &num;
	*ptr *= 2;
	printf("%d\n", *ptr);
	return (0);
}

/* Output
c1r1s1% cc q1.c
c1r1s1% ./a.out
84
c1r1s1% */