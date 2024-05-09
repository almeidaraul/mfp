#include <bits/stdc++.h>
using namespace std;

signed main() {
  // set
  set<int> s;

  s.insert(3);
  s.insert(3);
  s.insert(5);
  s.insert(7);
  s.insert(9);

  s.erase(7);

  cout << "s: ";
  for (int x : s)
    cout << x << ' '; // 3 5 9
  cout << '\n';

  // não tem acesso aleatório!

  cout << "s.lower_bound(2): " << (*s.lower_bound(2)) << '\n'; // 3
  auto it = s.upper_bound(5);
  if (it == s.end())
    cout << "ninguém maior que 5 em s\n";
  else
    cout << "s.upper_bound(5): " << (*it) << '\n'; // 9

  // multiset
  multiset<int> ms;
  ms.insert(1);
  ms.insert(2);
  ms.insert(2);
  ms.insert(3);
  ms.insert(3);
  ms.insert(3);

  cout << "ms: ";
  for (int x : ms)
    cout << x << ' '; // 1 2 2 3 3 3
  cout << '\n';

  cout << "ms.lower_bound(0): " << (*ms.lower_bound(0)) << '\n'; // 1
  cout << "ms.upper_bound(1): " << (*ms.upper_bound(1)) << '\n'; // 2

  ms.erase(3);  // ms = 1 2 2
  ms.erase(ms.find(2));  // ms = 1 2
}
