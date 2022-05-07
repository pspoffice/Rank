// https://www.hackerrank.com/challenges/three-month-preparation-kit-angry-children/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-five

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(int k, vector<int> arr) -> int {
  sort(arr.begin(), arr.end());
  int x = INT32_MAX;
  for (int i = 0; i <= (int)arr.size() - k; ++i) {
    if (arr[i + k - 1] - arr[i] < x) {
      x = arr[i + k - 1] - arr[i];
    }
  }
  return x;
}

auto main() -> int {
  FAST;
  return 0;
}
