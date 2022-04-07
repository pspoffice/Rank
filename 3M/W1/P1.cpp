// https://www.hackerrank.com/challenges/three-month-preparation-kit-plus-minus?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one

#include <bits/stdc++.h>

using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(vector<int> &v) -> void {
  sort(v.begin(), v.end());
  const auto size = (int)v.size();
  const auto zeros = (int)count(v.begin(), v.end(), 0);
  const double c = double(zeros) / size;
  int p = 0;
  while (v[p] < 0) {
    ++p;
  }
  const double a = double(p) / size;
  const double b = double(size - zeros - p) / size;
  cout << fixed << setprecision(6) << b << '\n' << a << '\n' << c << '\n';
}

auto main() -> int {
  FAST;
  return 0;
}
