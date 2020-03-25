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
	int temp;
	vector<bool> a(n, true);
	for (int i = 0; i < n-1; i++)
	{
		cin >> temp;
		a[temp - 1] = false;
	}
	for (int i = 0; i < n-1; i++)
	{
		if (a[i])
		{
			cout << i + 1 << endl;
			return 0;
		}
	}

	return 0;
}