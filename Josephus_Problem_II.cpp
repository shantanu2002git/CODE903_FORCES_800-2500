#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
  int n, k;
    cin >> n >> k;

    indexed_set<int> children;
    for (int i = 1; i <= n; i++) children.insert(i);

    int index = k + 1;
    while (children.size() > 1) {
        index %= children.size();
        if (index == 0) index = children.size();

        auto it = children.find_by_order(index - 1);
        cout << *it << " ";
        children.erase(it);

        index += k;
    }

    cout << *children.begin() << endl;
}

// 1 2 3 4 5 6 7