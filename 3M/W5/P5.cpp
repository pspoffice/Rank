// https://www.hackerrank.com/challenges/three-month-preparation-kit-missing-numbers/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-five

#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(vector<int> &a, vector<int> &b) -> vector<int> {
  array<int, 101> p;
  p.fill(0);
  vector<int> v;
  int x = *min_element(b.begin(), b.end());
  for (const int z : a) {
    p[z - x]--;
  }
  for (const int z : b) {
    p[z - x]++;
  }
  for (size_t i = 0; i < p.size(); i++) {
    if (p[i] > 0) {
      v.push_back(x + i);
    }
  }
  return v;
}

auto main() -> int {
  FAST;
  return 0;
}
