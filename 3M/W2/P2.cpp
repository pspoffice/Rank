// https://www.hackerrank.com/challenges/three-month-preparation-kit-grading/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(vector<int> &v) -> vector<int> {
  const auto size = (int)v.size();
  for (int i = 0; i < size; ++i) {
    if (v[i] % 5 != 0 and v[i] >= 38) {
      int x = (v[i] + 5 - 1) / 5;
      x *= 5;
      if (x - v[i] < 3) {
        v[i] = x;
      }
    }
  }
  return v;
}

auto main() -> int {
  FAST;
  return 0;
}
