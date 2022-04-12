// https://www.hackerrank.com/challenges/three-month-preparation-kit-maximum-perimeter-triangle/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(vector<int> v) -> vector<int> {
  sort(v.begin(), v.end(), [](int a, int b) -> int { return a > b; });
  for (size_t i = 0; i < v.size() - 2; i++) {
    if (v[i] < (v[i + 1] + v[i + 2])) {
      return {v[i + 2], v[i + 1], v[i]};
    }
  }
  return {-1};
}

auto main() -> int {
  FAST;
  return 0;
}
