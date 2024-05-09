#include <bits/stdc++.h>
using namespace std;

vector<int> moedas = {100, 50, 25, 10, 5, 1};

signed main() {
  int x;
  cin >> x;
  int ans = 0;
  for (int c : moedas)
    // podemos substituir o while por uma operação O(1)
    while (x >= c) {
      ans++;
      x -= c;
    }
  cout << ans << '\n';
}
