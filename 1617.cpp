#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

#define MAX 10000000007
using namespace std;
int main()
{
	long long int n = 1;
	long long int k;
	cin >> k;

	while (k--)
	{
		n <<= 1;
		n %= MAX;
	}
	cout << n << endl;

	return 0;
}