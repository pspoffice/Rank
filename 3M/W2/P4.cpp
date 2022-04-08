// https://www.hackerrank.com/challenges/three-month-preparation-kit-diagonal-difference/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const vector<vector<int>> &v) -> int {
  const auto size = (int)v.size();
  int a = 0, b = 0;
  for (int i = 0; i < size; ++i) {
    a += v[i][i];
    b += v[i][size - i - 1];
  }
  return abs(a - b);
}

auto main() -> int {
  FAST;
  return 0;
}
