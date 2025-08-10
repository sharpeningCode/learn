#include <iostream>

using namespace std;

int	main(void)
{
	int i = 0;
	int j = 1;
	cout << !(i << j + i || j) << endl;
	return (0);
}

/* Output
c1r1s1% clang++ q02.cpp
q02.cpp:9:19: warning: operator '<<' has lower precedence than '+'; '+' will be evaluated first [-Wshift-op-parentheses]
        cout << !(i << j + i || j) << endl;
                    ~~ ~~^~~
q02.cpp:9:19: note: place parentheses around the '+' expression to silence this warning
        cout << !(i << j + i || j) << endl;
                         ^
                       (    )
1 warning generated.
c1r1s1% ./a.out
0
c1r1s1% */