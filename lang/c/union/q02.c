#include <stdio.h>

void	func();

int	main(void)
{
	func();
	return (0);
}

void	func()
{
	struct inner
	{
		int a;
		int b;
	};
	struct inner in = {5 * 1, 5 * 2};
	printf("%d %d\n", in.a, in.b);
}

/* Output
c1r1s1 cc q0
2.c
c1r1s1 ./a.out
5 10
c1r1s1 */