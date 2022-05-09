// https://www.hackerrank.com/challenges/three-month-preparation-kit-smart-number/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-five

#include <iostream>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const int x) -> bool {
  auto a = (int)sqrt(x);
  if (a * a == x) {
    return true;
  }
  return false;
}

auto main() -> int {
  FAST;
  int x;
  cin >> x;
  if (Solve(x)) {
    cout << "YES" << '\n';
  } else {
    cout << "NO" << '\n';
  }
  return 0;
}
