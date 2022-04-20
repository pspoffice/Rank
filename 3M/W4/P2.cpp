// https://www.hackerrank.com/challenges/three-month-preparation-kit-array-left-rotation/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-four

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const int d, vector<int> &arr) -> vector<int> {
  arr.reserve(arr.size() + d);
  for (int i = 0; i < d; i++) {
    arr.push_back(arr[i]);
  }
  arr.erase(arr.begin(), arr.begin() + d);
  return arr;
}

auto main() -> int {
  FAST;
  const int d = 2;
  vector<int> arr = {1, 2, 3, 4, 5};
  for (auto x : Solve(d, arr)) {
    cout << x << ' ';
  }
  cout << endl;
  return 0;
}
