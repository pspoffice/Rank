// https://www.hackerrank.com/challenges/three-month-preparation-kit-two-arrays/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const int k, const vector<int> &a, const vector<int> &b) -> string {
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), greater<>());
  for (int i = 0; i < (int)a.size(); ++i) {
    if (a[i] + b[i] < k) {
      return "NO";
    }
  }
  return "YES";
}

auto main() -> int {
  FAST;
  return 0;
}
