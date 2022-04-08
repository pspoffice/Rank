// https://www.hackerrank.com/challenges/three-month-preparation-kit-counting-valleys/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const int n, const string &path) -> int {
  int x = 0;
  int count = 0;
  vector<int> v = {0};
  for (int i = 0; i < n; ++i) {
    if (path[i] == 'D') {
      x -= 1;
    } else {
      x += 1;
    }
    v.push_back(x);
  }
  vector<int> z;
  for (int i = 0; i < (int)v.size(); ++i) {
    if (v[i] == 0) {
      z.push_back(i);
    }
  }
  for (int i = 0; i < (int)z.size() - 1; ++i) {
    const int start = z[i], end = z[i + 1];
    bool f = true;
    for (int j = start; j < end; ++j) {
      if (v[j] > 0) {
        f = false;
        break;
      }
    }
    count += (f ? 1 : 0);
  }
  return count;
}

auto main() -> int {
  FAST;
  return 0;
}
