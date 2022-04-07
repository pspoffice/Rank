// https://www.hackerrank.com/challenges/three-month-preparation-kit-breaking-best-and-worst-records?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one

#include <bits/stdc++.h>
using namespace std;

#define FAST std::ios::sync_with_stdio(false), std::cin.tie(nullptr)

auto Solve(const vector<int> &v) -> void {
  int a, b, c = 0, d = 0;
  a = b = v[0];
  for (int i = 1; i < (int)v.size(); ++i) {
    if (v[i] < a) {
      ++c;
      a = v[i];
    } else if (v[i] > b) {
      ++d;
      b = v[i];
    }
  }
  cout << d << ' ' << c << '\n';
}

auto main() -> int {
  FAST;
  return 0;
}
