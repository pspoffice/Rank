// https://www.hackerrank.com/challenges/flipping-the-matrix/problem

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const vector<vector<int>> &v) -> int {
  int s = 0;
  array<int, 4> a;  // NOLINT(cppcoreguidelines-pro-type-member-init)
  const int x = (int)v.size() / 2;
  const int end = (int)v.size() - 1;
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      a[0] = v[i][j];
      a[1] = v[i][end - j];
      a[2] = v[end - i][j];
      a[3] = v[end - i][end - j];
      sort(a.begin(), a.end(), greater<int>());
      s += a[0];
    }
  }
  return s;
}

auto main() -> int {
  FAST;
  return 0;
}
