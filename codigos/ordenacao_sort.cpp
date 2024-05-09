#include <bits/stdc++.h>
using namespace std;

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  // lendo a entrada
  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; ++i)
      cin >> v[i];

  // ordenando
  sort(v.begin(), v.end());

  // imprimindo a saída
  for (int i = 0; i < n; ++i)
      cout << v[i] << " \n"[i+1 == n];
}
