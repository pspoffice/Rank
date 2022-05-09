// https://www.hackerrank.com/challenges/three-month-preparation-kit-dynamic-array/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-five

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const int n, const vector<vector<int>> &q) -> vector<int> {
  int index = 0;
  int previous = 0;
  vector<int> x;
  vector<vector<int>> v(n);
  for (const auto &arr : q) {
    index = ((arr[1] ^ previous) % n);
    if (arr[0] == 1) {
      v[index].push_back(arr[2]);
    } else {
      previous = v[index][arr[2] % (v[index].size())];
      x.push_back(previous);
    }
  }
  return x;
}

auto main() -> int {
  FAST;
  int a, b;
  cin >> a >> b;
  vector<vector<int>> q(b);
  for (int i = 0; i < b; i++) {
    q[i].resize(3);
    cin >> q[i][0] >> q[i][1] >> q[i][2];
  }
  for (const auto &z : Solve(a, q)) {
    cout << z << '\n';
  }
  return 0;
}
