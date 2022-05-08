// https://www.hackerrank.com/challenges/three-month-preparation-kit-strong-password/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-five

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(int size, const string &password) -> int {
  int a, b, c, d;
  a = b = c = d = 0;
  for (const char &ch : password) {
    if (isdigit(ch))
      a += 1;
    else if (islower(ch))
      b += 1;
    else if (isupper(ch))
      c += 1;
    else
      d += 1;
  }
  int count = 0;
  if (a < 1) count += 1;
  if (b < 1) count += 1;
  if (c < 1) count += 1;
  if (d < 1) count += 1;
  return max(6 - size, count);
}

auto main() -> int {
  FAST;
  return 0;
}
