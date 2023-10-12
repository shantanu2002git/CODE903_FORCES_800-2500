#include <bits/stdc++.h>
using namespace std;

int score(int i, int j)
{
  int point[10][10] = {
      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
      {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
      {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
      {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
      {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
      {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
  return (point[i][j]);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    char arr[10][10];
    int s = 0;
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        cin >> arr[i][j];
        if (arr[i][j] == 'X')
        {

          s = s + score(i, j);
        }
      }
    }
    // for(int i=1; i<=10; i++)
    // {
    //    for(int j=1; j<=10; j++){
    //     cout<<arr[i][j];
    //    }
    //    cout<<endl;
    // }

    cout << s << endl;
  }

  return 0;
}