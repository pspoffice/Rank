// https://www.hackerrank.com/challenges/three-month-preparation-kit-pangrams/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two

#include <bits/stdc++.h>
using namespace std;

#define FAST ios::sync_with_stdio(false), cin.tie(nullptr)

auto Solve(string &str) -> string {
  transform(str.begin(), str.end(), str.begin(),
            [](int c) -> int { return tolower(c); });
  set<char> st;
  for (const char &c : str) {
    if (!isspace(c)) {
      st.insert(c);
    }
  }
  return st.size() == 26 ? "pangram" : "not pangram";
}

auto main() -> int {
  FAST;
  return 0;
}
