#include <bits/stdc++.h>
using namespace std;

int d[1005];
const int rem = 10007;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  d[0] = 1;
  d[1] = 1;
  for (int i = 2; i <= n; i++) 
    d[i] = (d[i - 1] + 2 * d[i - 2]) % rem;
  cout << d[n];
}