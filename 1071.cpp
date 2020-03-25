#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

#define MAX 10000000007

using namespace std;

int main()
{
    long long t;
    long long y, x;
    long long a;
    long long b;
    long long s;

    cin >> t;
    while (t != 0) {
        cin >> y >> x;

        a = max(y, x);
        b = min(y, x);
        s = (a - 1) * (a - 1);

        if (a == b) s += a;

        else if (a % 2 == 1) 
        {
            if (x == a) s += a * 2 - y;
            else s += x;
        }

        else 
        {
            if (y == a) s += a * 2 - x;
            else s += y;
        }

        cout << s << endl;
        t = t - 1;
    }

	return 0;
}