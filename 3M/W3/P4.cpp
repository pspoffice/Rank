// https://www.hackerrank.com/challenges/three-month-preparation-kit-sock-merchant/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const int n, const vector<int> &arr) -> int {
  int count = 0;
  unordered_map<int, int> map;
  for (const int &x : arr) {
    ++map[x];
  }
  for (const auto &[x, y] : map) {
    count += y / 2;
  }
  return count;
}

auto main() -> int {
  FAST;
  return 0;
}
