#include <stdio.h>

int	main(void)
{
	static int a[] = {10, 20, 30, 40, 50};
	static int *p[] = {a, a+3, a+4, a+1, a+2};
	int **ptr = p;
	ptr++;
	printf("%d%d\n", ptr - p, **ptr);
	return (0);
}

/* Output
c1r1s1% cc q07.c
q15.c: In function ‘main’:
q15.c:9:18: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long int’ [-Wformat=]
    9 |         printf("%d%d\n", ptr - p, **ptr);
      |                 ~^       ~~~~~~~
      |                  |           |
      |                  int         long int
      |                 %ld
c1r1s1% ./a.out
140
c1r1s1% */