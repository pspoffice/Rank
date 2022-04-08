// https://www.hackerrank.com/challenges/three-month-preparation-kit-countingsort1/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const vector<int> &a) -> vector<int> {
  vector<int> b(100, 0);
  for (const int &x : a) {
    b[x] += 1;
  }
  return b;
}

auto main() -> int {
  FAST;
  return 0;
}
