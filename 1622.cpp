#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

#define MAX 1000000007

using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> r;
    r.push_back(s);
    while(next_permutation(s.begin(), s.end()))
    {
        r.push_back(s);
    }
    cout << r.size() << endl;
    for (auto s : r) cout << s << endl;
}