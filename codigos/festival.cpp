#include <bits/stdc++.h>
using namespace std;

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (int i = 0; i < m; ++i)
    cin >> a[i];
  // se a não estivesse ordenado:
  // sort(a.begin(), a.end());
  // ou use set<int>
  for (int i = 1; i <= n; ++i)
    cout << (*lower_bound(a.begin(), a.end(), i) - i) << '\n';
}

