// https://www.hackerrank.com/challenges/three-month-preparation-kit-drawing-book/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three

#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(int n, const int p) -> int {
  // 10 4
  // - 1 > 2 3 > 4 5 > 6 7 > 8 9 > 10 -
  if (n % 2 == 0) {
    n += 1;
  }

  // 5 3
  // - 1 > 2 3 > 4 5
  const int a = p / 2;
  const int b = (n / 2) - a;
  return min(a, b);
}

auto main() -> int {
  FAST;
  return 0;
}
