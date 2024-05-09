#include <bits/stdc++.h>
using namespace std;

signed main() {
  int x = 2;
  vector<int> v = {0, 1, 2, 3};
  int i = lower_bound(v.begin(), v.end(), x) - v.begin(); // 1º >= x
  int j = upper_bound(v.begin(), v.end(), x) - v.begin(); // 1º > x
  cout << "lower bound: " << v[i] << '\n';
  cout << "upper bound: " << v[j] << '\n';
}
