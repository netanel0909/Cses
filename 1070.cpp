#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

#define MAX 10000000007
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k = n;
	if (n <= 4)cout << "NO SOLUTION";
	else
	{
		cout << n << " ";
		
		while (k > 2)
		{
			k = k - 2;
			cout << k << " ";
		}
		k = n + 1;
		while (k > 2)
		{
			k = k - 2;
			cout << k << " ";
		}
	}

	return 0;
}