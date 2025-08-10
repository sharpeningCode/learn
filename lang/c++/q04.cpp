#include <iostream>

using namespace std;

int	main(void)
{

	cout << endl;
	return (0);
}

/* Output
c1r1s1% clang++ q04.cpp
q04.cpp:8:11: warning: implicit conversion from 'double' to 'int' changes value from 1.1 to 1 [-Wliteral-conversion]
        int             y = 1.1;
                        ~   ^~~
1 warning generated.
c1r1s1% ./a.out
yes
c1r1s1% */