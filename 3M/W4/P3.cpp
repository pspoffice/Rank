// https://www.hackerrank.com/challenges/three-month-preparation-kit-kangaroo/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-four

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(int x1, int v1, int x2, int v2) -> string {
  // No Solution
  if (v1 <= v2) {
    return "NO";
  }
  // D = S * T
  const int x = (x2 - x1) % (v1 - v2);
  cout << (x2 - x1) / (v1 - v2) << '\n';
  return x == 0 ? "YES" : "NO";
}

auto main() -> int {
  FAST;
  return 0;
}
