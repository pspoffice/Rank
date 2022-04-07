// https://www.hackerrank.com/challenges/three-month-preparation-kit-lonely-integer/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const vector<int> &v) -> int {
  unordered_map<int, int> x;
  x.reserve(v.size());
  for (const auto &i : v) {
    x[i] += 1;
  }
  for (const auto &[a, b] : x) {
    if (b != 2) {
      return a;
    }
  }
  return -1;
}

auto main() -> int {
  FAST;
  return 0;
}
