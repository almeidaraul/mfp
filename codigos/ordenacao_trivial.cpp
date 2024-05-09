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
  for (int inicio = 0; inicio < n-1; ++inicio) {
      int idx = inicio;
      for (int i = inicio+1; i < n; ++i)
          if (v[i] < v[idx])
              idx = i;
      swap(v[inicio], v[idx]);
  }

  // imprimindo a saída
  for (int i = 0; i < n; ++i)
      cout << v[i] << " \n"[i+1 == n];
}
