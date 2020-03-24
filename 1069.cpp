
#include"allProblems.h"

using namespace std;

int f1069()
{
	string str;
	cin >> str;
	int r = 0;
	int m = 0;
	for (int i = 1; i<str.length(); i++)
	{
		if (str[i] == str[i - 1])
		{
			r++; 
			m = max(r, m);
		}
		else r = 0;
	}
	cout << m+1 << endl;
	return 0;
}