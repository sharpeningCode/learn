#include <stdio.h>

typedef	union
{
	int int_1;
	int int_2;
}	value;

int	main(void)
{
	value test;
	test.int_1 = 1;
	test.int_2 = 2;
	printf("%d\n", test.int_1);
	return (0);
}

/* Output
c1r1s1% cc q01.c
c1r1s1% ./a.out
2
c1r1s1% */