#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<char>> forest(n, vector<char>(n));
    vector<vector<int>> trees(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> forest[i][j];
            if (forest[i][j] == '*') {
                trees[i][j] = 1;
            }
        }
    }
 
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            trees[i][j] += trees[i - 1][j];
        }
    }
 
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n; i++) {
            trees[i][j] += trees[i][j - 1];
        }
    }
 
    for (int i = 0; i < q; i++) {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        y1--; x1--; y2--; x2--;
        int treesInRectangle = trees[y2][x2];
        if (y1 > 0) {
            treesInRectangle -= trees[y1 - 1][x2];
        }
        if (x1 > 0) {
            treesInRectangle -= trees[y2][x1 - 1];
        }
        if (y1 > 0 && x1 > 0) {
            treesInRectangle += trees[y1 - 1][x1 - 1];
        }
        cout << treesInRectangle << endl;
    }
 
    return 0;
}