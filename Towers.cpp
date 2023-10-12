#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> cube;
  for (int i = 0; i < n; i++)
  {
    int cue;
    cin >> cue;
    int lo = 0, hi = cube.size();
    while (lo < hi)
    {
      int mid = (lo + hi) / 2;
      if (cube[mid] > cue)
      {
        hi = mid;
      }
      else
      {
        lo = mid + 1;
      }
    }

    // ! Step 6: If the correct position is at the end of the vector, add z to the vector
    // ! Step 7: Otherwise, replace the element at the correct position with z
    if (lo == cube.size())
    {
      cube.push_back(cue);
    }
    else
    {
      cube[lo] = cue;
    }
  }
  cout << cube.size();

  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  cin >> n;
  multiset<int> ans;
  for (int i = 0; i < n; ++i) {
    cin >> k;
    auto it = ans.upper_bound(k);
    // Find the tower having the element that is just larger than k to add
    // k to. If it doesn't exist then we create a new tower.
    if (it == ans.end()) ans.insert(k);
    else {
      // If there exists a satisfying tower, add k to that tower and
      // update the top element of the tower
      ans.erase(it);
      ans.insert(k);
    }
  }
  cout << ans.size();
  return 0;
}
*/