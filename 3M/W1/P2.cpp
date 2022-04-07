// https://www.hackerrank.com/challenges/three-month-preparation-kit-mini-max-sum?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one

#include <bits/stdc++.h>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(vector<int> &v) -> void {
  sort(v.begin(), v.end());
  uint64_t a = 0, b = 0;
  for (int i = 0; i < 4; ++i) {
    a += v[i];
  }
  for (int i = 1; i < 5; ++i) {
    b += v[i];
  }
  cout << a << ' ' << b << '\n';
}

auto main() -> int {
  FAST;
  return 0;
}
