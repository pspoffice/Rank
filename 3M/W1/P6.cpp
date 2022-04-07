// https://www.hackerrank.com/challenges/three-month-preparation-kit-divisible-sum-pairs?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const int n, const int k, const vector<int> &v) -> int {
  int count = 0;
  for (int i = 0; i < (int)v.size(); ++i) {
    for (int j = i + 1; j < (int)v.size(); ++j) {
      if ((v[i] + v[j]) % k == 0) {
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