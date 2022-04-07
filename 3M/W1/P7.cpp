// https://www.hackerrank.com/challenges/three-month-preparation-kit-sparse-arrays?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const vector<string> &a, const vector<string> &b) -> vector<int> {
  vector<int> v;
  for (const string &s : b) {
    int x = (int)count(a.begin(), a.end(), s);
    v.push_back(x);
  }
  return v;
}

auto main() -> int {
  FAST;
  return 0;
}
