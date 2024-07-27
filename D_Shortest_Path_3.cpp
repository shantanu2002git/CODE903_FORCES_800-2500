#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool com11(string s)
{
    int n = s.size();
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s = "00011";
vector<string>ss;
    do
    {
        // if (com11(s))
        // {
            cout << s << endl;
        }
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
