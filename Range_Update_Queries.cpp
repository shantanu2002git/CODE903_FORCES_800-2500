#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int n, q;
int arr[N];
int tree[4 * N];
int lazy[4 * N];

void build(int node, int start, int end) {
    if (start == end) {
        tree[node] = arr[start];
    } else {
        int mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}

void updateRange(int node, int start, int end, int l, int r, int val) {
    if (lazy[node] != 0) {
        tree[node] += (end - start + 1) * lazy[node];
        if (start != end) {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (start > r || end < l)
        return;

    if (start >= l && end <= r) {
        tree[node] += (end - start + 1) * val;
        if (start != end) {
            lazy[2 * node] += val;
            lazy[2 * node + 1] += val;
        }
        return;
    }

    int mid = (start + end) / 2;
    updateRange(2 * node, start, mid, l, r, val);
    updateRange(2 * node + 1, mid + 1, end, l, r, val);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int queryRange(int node, int start, int end, int idx) {
    if (lazy[node] != 0) {
        tree[node] += (end - start + 1) * lazy[node];
        if (start != end) {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }

    if (start == end) {
        return tree[node];
    }

    int mid = (start + end) / 2;
    if (idx <= mid) {
        return queryRange(2 * node, start, mid, idx);
    } else {
        return queryRange(2 * node + 1, mid + 1, end, idx);
    }
}

int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    build(1, 1, n);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int a, b, u;
            cin >> a >> b >> u;
            updateRange(1, 1, n, a, b, u);
        } else {
            int k;
            cin >> k;
            cout << queryRange(1, 1, n, k) << endl;
        }
    }

    return 0;
}
