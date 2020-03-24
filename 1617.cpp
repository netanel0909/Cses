#include"allProblems.h"
#define MAX 1000000007

using namespace std;
int f1617()
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