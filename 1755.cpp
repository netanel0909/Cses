#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#define MAX 1000000007
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<char> r;
    int cnt = 0;
    vector<long long int> a(26, 0);
    for(auto i : str)
    {
        a[i - 'A']++;
    }
    for(auto i : a)
    {
        if(i%2==1) cnt++;
    }
    if(cnt > 1){cout << "NO SOLUTION";return 0;}

    for (int i = 0; i < 26; i++)
    {
        if (!(a[i] % 2))
        {
            for (int j = 0; j < a[i] / 2; j++) r.push_back(i + 'A');
        }   
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2)
        {
            for (int j = 0; j < a[i]; j++) r.push_back(i + 'A');
        }
    }

    for (int i = 25; i >= 0; i--)
    {
        if (!(a[i] % 2))
        {
            for (int j = 0; j < a[i] / 2; j++) r.push_back(i + 'A');
        }
    }

    for(auto c : r)cout << c;
    cout << endl;

    return 0;
}