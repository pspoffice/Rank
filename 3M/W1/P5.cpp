// https://www.hackerrank.com/challenges/three-month-preparation-kit-camel-case?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-one

#include <bits/stdc++.h>
using namespace std;

#define FAST std::ios::sync_with_stdio(false), std::cin.tie(nullptr)

auto Solve(const string &s) -> void {
  char operation, type;
  type = s[2];
  operation = s[0];
  string str = s.substr(4);
  if (operation == 'S') {
    int size = (int)str.size();
    if (type == 'M') {
      size -= 2;
    }
    for (int i = 0; i < size; ++i) {
      if (i != 0 and isupper(str[i])) {
        cout << ' ';
      }
      str[i] = (char)tolower(str[i]);
      cout << str[i];
    }
  }
  if (operation == 'C') {
    if (type == 'M') {
      str += "()";
    }
    if (type == 'C') {
      str[0] = (char)toupper(str[0]);
    }
    const int size = (int)str.size();
    for (int i = 0; i < size; ++i) {
      if (i < size - 1 and isspace(str[i])) {
        ++i;
        str[i] = (char)toupper(str[i]);
      }
      cout << str[i];
    }
  }
  cout << "\r\n";
}

auto main() -> int {
  FAST;
  string input;
  while (getline(cin, input)) {
    input.erase(remove(input.begin(), input.end(), '\r'), input.end());
    input.erase(remove(input.begin(), input.end(), '\t'), input.end());
    input.erase(remove(input.begin(), input.end(), '\n'), input.end());
    Solve(input);
  }
  return 0;
}
