// https://www.hackerrank.com/challenges/three-month-preparation-kit-picking-numbers/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-four

#include <iostream>
#include <map>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const vector<int> &v) -> int {
  int x = 0;
  map<int, int> d;
  for (const int z : v) {
    d[z] += 1;
  }
  for (const auto &[a, b] : d) {
    x = max(x, d[a]);
    if (d.contains(a + 1)) {
      x = max(x, b + d[a + 1]);
    }
    if (d.contains(a - 1)) {
      x = max(x, b + d[a - 1]);
    }
  }
  return x;
}

auto main() -> int {
  FAST;
  return 0;
}
