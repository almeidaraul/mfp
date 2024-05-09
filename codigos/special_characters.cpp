#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n%2) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  for (int i = 0; 2*i < n; ++i) {
    char c = 'A'+(i%26);
    cout << c << c;
  }
  cout << '\n';
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
