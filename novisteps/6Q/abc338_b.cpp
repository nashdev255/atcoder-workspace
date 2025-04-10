#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
  string S;
  cin >> S;
  const int N = S.size();
  unordered_map<char, int> cnts{};
  for ( char c : S ) ++cnts[c];
  int maxcnt = 0;
  for ( auto& cnt : cnts ) maxcnt = max(maxcnt, cnt.second);
  char res = 'z';
  for ( auto& cnt : cnts ) {
    if ( cnt.second == maxcnt ) res = min(res, cnt.first);
  }
  cout << res << endl;
  return 0;
}
