#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <sstream>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to build tree from edges
Node* buildTree(int n, vector<pair<int, int>>& edges) {
    if (n == 0) return NULL;
    vector<Node*> nodes(n + 1, NULL);
    for (int i = 1; i <= n; ++i) {
        nodes[i] = new Node(i);
    }
    for (auto& edge : edges) {
        int u = edge.first, v = edge.second;
        if (!nodes[u]->left) nodes[u]->left = nodes[v];
        else nodes[u]->right = nodes[v];
    }
    return nodes[1];
}

class Solution {
public:
    int mx = 0;
    int call(Node* root) {
        if (root == NULL) {
            return 0;
        }
        int lf = call(root->left);
        int ri = call(root->right);
        mx = max(mx, lf + ri);
        return max(lf, ri) + 1;
    }

    int diameter(Node* root) {
        call(root);
        return mx;
    }
};

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> edges(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
    }
    Node* root = buildTree(n, edges);
    Solution ob;
    cout << ob.diameter(root) << endl;
    return 0;
}
