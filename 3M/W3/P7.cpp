// https://www.hackerrank.com/challenges/three-month-preparation-kit-zig-zag-sequence/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three

#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto FindZigZagSequence(vector<int> &v) -> void {
  ranges::sort(v);
  reverse(v.begin() + v.size() / 2, v.end());
  for (size_t i = 0; i < v.size(); i++) {
    if (i > 0) cout << ' ';
    cout << v[i];
  }
  cout << '\n';
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> v;
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      v.push_back(x);
    }
    FindZigZagSequence(v);
  }
  return 0;
}
