// https://www.hackerrank.com/challenges/three-month-preparation-kit-migratory-birds/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const vector<int>& arr) -> int {
  map<int, int> map;
  for (const int& x : arr) {
    ++map[x];
  }
  vector<pair<int, int>> v;
  v.reserve(map.size());
  for (const auto& x : map) {
    v.emplace_back(x);
  }
  sort(v.begin(), v.end(),
       [](const pair<int, int>& a, const pair<int, int>& b) -> bool {
         return a.second > b.second;
       });
  return v[0].first;
}

auto main() -> int {
  FAST;
  return 0;
}
