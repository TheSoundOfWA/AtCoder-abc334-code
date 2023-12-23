// User Name: JonathanLiu
// Link: https://atcoder.jp/contests/abc334/tasks/abc334_b

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  ll a, m, l, r;
  scanf("%lld%lld%lld%lld", &a, &m, &l, &r);

  l -= a;
  r -= a;

  r += (abs(l) / m + 1) * m;
  l += (abs(l) / m + 1) * m;

  printf("%lld", r / m - (l - 1) / m);
  
  return 0;
}
