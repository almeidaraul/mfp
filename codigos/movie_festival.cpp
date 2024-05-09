#include <bits/stdc++.h>
using namespace std;

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  vector<pair<int, int>> filmes;
  for (int i = 0; i < n; ++i) {
    int inicio, fim;
    cin >> inicio >> fim;
    filmes.push_back(make_pair(fim, inicio));
  }

  sort(filmes.begin(), filmes.end());

  int t = -1, ans = 0;
  for (int i = 0; i < n; ++i) {
    int inicio = filmes[i].second,
        fim = filmes[i].first;
    if (inicio < t)
      continue;
    ans++;
    t = fim;
  }
  
  cout << ans << '\n';
}
