#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

#define MAX 10000000007

int main()
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