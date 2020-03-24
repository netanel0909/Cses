#include<iostream>
#include<vector>
#include<algorithm>



int f1068()
{
	int n;
	std::cin >> n;
	std::cout << n;
	while (n != 1)
	{
		if (n % 2 == 0) n /= 2;
		else n = 3 * n + 1;

		std::cout << n << " ";
	}

	return 0;
}