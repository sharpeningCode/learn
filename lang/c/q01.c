#include <stdio.h>

void	foo();

int	main(void)
{
	void (*bar)() = foo;
	(*bar)();
	bar();
	printf("\n");
	return (0);
}

void	foo()
{
	printf("Sololearn");
}

/* Output
c1r1s1% cc q01
.c
c1r1s1% ./a.out
SololearnSololearn
c1r1s1% */