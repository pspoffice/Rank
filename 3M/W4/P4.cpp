// https://www.hackerrank.com/challenges/three-month-preparation-kit-separate-the-numbers/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-four

#include <iostream>
#include <string>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(const string &s) -> void {
  if (s.size() <= 1) {
    cout << "NO" << '\n';
    return;
  }
  for (size_t i = 1; i <= s.size() / 2; i++) {
    const string a = string(s.begin(), s.begin() + i);
    auto x = stol(a);
    string b = to_string(x);
    while (b.size() < s.size()) {
      b.append(to_string(++x));
    }
    if (s == b) {
      cout << "YES " << a << '\n';
      return;
    }
  }
  cout << "NO" << '\n';
}

auto main() -> int {
  FAST;
  return 0;
}
