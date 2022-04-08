// https://www.hackerrank.com/challenges/three-month-preparation-kit-mars-exploration/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const string &s) -> int {
  int count = 0;
  const string a = "SOS";
  for (int i = 0; i < (int)s.size(); i += 3) {
    for (int j = 0; j < 3; ++j) {
      if (s[i + j] != a[j]) {
        count += 1;
      }
    }
  }
  return count;
}

auto main() -> int {
  FAST;
  return 0;
}
