#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

#define MAX 10000000007

using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int a, b;
		cin >> a >> b;
		if( (a+b) % 3==0 && 2*min(a, b) >= max(a,b)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}