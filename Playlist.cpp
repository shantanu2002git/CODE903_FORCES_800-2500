#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    map<int, int> mpl;
    int i = 0, j = 0;
    int mx = -1e9;
    while (i < n)
    {
        mpl[vc[i]]++;
        while (mpl[vc[i]] > 1)
        {
            mpl[vc[j]]--;
            if (mpl[vc[j]] == 0)
            {
                mpl.erase(vc[j]);
            }
            j++;
        }
        int si = mpl.size();
        mx = max(mx, si);
        i++;
    }
    cout << mx;
    return 0;
}
