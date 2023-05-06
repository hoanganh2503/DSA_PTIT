#include <iostream>
#include <vector>
#include <stack>

using namespace std;

const int MAXN = 1005;

vector<int> graph[MAXN];
vector<int> rev_graph[MAXN];
bool visited[MAXN];

void dfs(int u, vector<int>* g) {
    visited[u] = true;
    for (int v : g[u]) {
        if (!visited[v]) {
            dfs(v, g);
        }
    }
}

int countStronglyConnectedComponents(int n) {
    stack<int> stk;

    // duyệt đồ thị theo thứ tự topo bằng thuật toán DFS
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i, graph);
            stk.push(i);
        }
    }

    // đảo ngược các cạnh trong đồ thị
    for (int i = 1; i <= n; i++) {
        for (int j : graph[i]) {
            rev_graph[j].push_back(i);
        }
    }

    int num_scc = 0;

    // duyệt đồ thị theo thứ tự ngược lại của thứ tự topo bằng thuật toán DFS
    while (!stk.empty()) {
        int u = stk.top();
        stk.pop();

        if (!visited[u]) {
            dfs(u, rev_graph);
            num_scc++;
        }
    }

    return num_scc;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    int num_scc = countStronglyConnectedComponents(n);

    cout << "Number of strongly connected components: " << num_scc << endl;

    return 0;
}