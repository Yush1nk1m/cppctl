#include <bits/stdc++.h>

using namespace std;

int N, M;
vector<int> v;
vector<bool> used;

void dfs(int depth);

int main() {
    cin >> N >> M;
    used = vector<bool>(N + 1, false);

    dfs(0);

    return 0;
}

void dfs(int depth) {
    if (depth == M) {
        for (int n : v)
            cout << n << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; i++)
        if (!used[i]) {
            used[i] = true;
            v.push_back(i);

            dfs(depth + 1);
            
            v.pop_back();
            used[i] = false;
        }
}