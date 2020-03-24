#include"allProblems.h"

using namespace std;
int f1092()
{
    long long n, k;
    vector<long long> s1;
    vector<long long> s2;
    cin >> n;
    k = n;
    
    while (k > (n*3 / 4))
    {
        s1.push_back(k);
        if(n-k != 0)
            s1.push_back(n - k);
        k -= 1;
    }
    while (k > (n * 2 / 4))
    {
        s2.push_back(k);
        s2.push_back(n - k);
        k -= 1;
    }

    long long sum1 = 0, sum2 = 0;

    for (auto i : s1) sum1 += i;
    for (auto i : s2) sum2 += i;

    if (sum1 == sum2)
    {

        cout << "YES" << endl;
        cout << s1.size() << endl;
        for (auto i : s1)
        {
            cout << i << " ";
        }
        cout << endl << s2.size() << endl;
        for (auto i : s2)
        {
            cout << i << endl;
        }
    }
    else
    {
        cout << "NO" << endl;

        cout << s1.size() << endl;
        for (auto i : s1)
        {
            cout << i << " ";
        }
        cout << s2.size() << endl;
        for (auto i : s2)
        {
            cout << i << endl;
        }

    }

    return 0;
}