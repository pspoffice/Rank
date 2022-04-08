// https://www.hackerrank.com/challenges/three-month-preparation-kit-flipping-bits/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(uint32_t a) -> long {
  uint32_t b = 1U << 31;
  b |= (b - 1);
  a ^= b;
  return a;
}

auto main() -> int {
  FAST;
  return 0;
}
