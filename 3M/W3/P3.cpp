// https://www.hackerrank.com/challenges/three-month-preparation-kit-strings-xor/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const string &s, const string &t) -> string {
  string x;
  x.reserve(s.size());
  for (int i = 0; i < (int)s.size(); i++) {
    if (s[i] == t[i])
      x += '0';
    else
      x += '1';
  }
  return x;
}

auto main() -> int {
  FAST;
  return 0;
}
