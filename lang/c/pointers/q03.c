#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello";
	char str2[10];
	char *t, *s;
	s = str1;
	t = str2;
	while (*t = *s)
		*t++ = *s++;
	printf("%s\n", str2);
	return (0);
}

/* Output
c1r1s1% cc q03.c
c1r1s1% ./a.out
Hello
c1r1s1% */