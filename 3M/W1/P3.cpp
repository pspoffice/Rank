// https://www.hackerrank.com/challenges/three-month-preparation-kit-time-conversion?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one

#include <bits/stdc++.h>
using namespace std;

#define FAST std::ios::sync_with_stdio(false), std::cin.tie(nullptr)

auto Solve(const string &s) -> void {
  char str[4];
  int hh, mm, ss;
  if (sscanf(s.c_str(), "%d:%d:%d%s", &hh, &mm, &ss, str) == 4) {
    if (strcmp(str, "AM") == 0) {
      if (hh == 12) {
        hh -= 12;
      }
    } else {
      if (hh != 12) {
        hh += 12;
      }
    }
    const string clock = (hh < 10 ? "0" : "") + to_string(hh) + ":" +
                         (mm < 10 ? "0" : "") + to_string(mm) + ":" +
                         (ss < 10 ? "0" : "") + to_string(ss);
    cout << clock << '\n';
  }
}

auto main() -> int {
  FAST;
  return 0;
}
