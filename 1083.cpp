#include<iostream>
#include<vector>
#include<algorithm>



using namespace std;
int f1083()
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