// https://www.hackerrank.com/challenges/three-month-preparation-kit-the-birthday-bar/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const vector<int> &v, const int d, const int m) -> int {
  int sum = 0, count = 0;
  const int size = int(v.size());
  for (int i = 0; i < size; ++i) {
    sum += v[i];
    if (i >= m - 1) {
      if (i >= m) sum -= v[i - m];
      if (sum == d) count++;
    }
  }
  return count;
}

auto main() -> int {
  FAST;
  return 0;
}
