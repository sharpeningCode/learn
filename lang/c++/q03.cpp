#include <iostream>

using namespace std;

int	main(void)
{
	int a, b, n;
	a = 5, b = 2;
	for (n = 1; n <= a; n++)
	{
		if (n % b == 0)
			continue ;
		else
			cout << n;
	}
	cout << endl;
	return (0);
}

/* Output
c1r1s1% clang++ q03.cpp
c1r1s1% ./a.out
135
c1r1s1% */