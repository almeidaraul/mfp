#include <bits/stdc++.h>
using namespace std;

signed main() {
  // vector<T> nome_do_vetor;
  vector<int> v;
  for (int i = 0; i < 5; ++i)
      v.push_back(i);

  // imprime: 0 1 2 3 4 5
  for (int i = 0; i < v.size(); ++i)
      cout << v[i] << ' '; // v[0], v[1], v[2], ... v[v.size()-1]
  cout << '\n';

  int n = 4;
  vector<int> a(3), // {0, 0, 0}
              b(n); // {0, 0, 0, 0}

  a.push_back(5); // adiciona um elemento ao fim de a
  b.pop_back(); // remove um elemento do fim de b

  cout << a.size() << '\n'; // 4
  cout << b.size() << '\n'; // 3

  a.clear(); // remove todos os elementos de a
  a.pop_back(); // erro: não tem nada para remover

  vector<int> c(3, -1); // {-1, -1, -1}
  c[0] = 5;
  for (int x : c)
    cout << x << ' '; // 5 -1 -1
  cout << '\n';
}
