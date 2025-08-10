#include <iostream>

using namespace std;

int	main(void)
{
	int i, j = 1;
	for (i = 5; i >= 1; i--)
		j *= i;
	cout << j << endl;
	return (0);
}

/* Output
c1r1s1% clang++ q01.cpp
c1r1s1% ./a.out
120
c1r1s1% */