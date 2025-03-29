#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<int> lengthOfZeroSeriesSections{};
  int cnt = 0;
  char pre = 'a';
  for ( int i = 0; i < S.size(); i++ ) {
    if ( S[i] == '0' ) cnt++;
    if ( pre = '0' && S[i] != '0' ) {
      lengthOfZeroSeriesSections.emplace_back(cnt);
      cnt = 0;
    }
    pre = S[i];
    if ( i == S.size() - 1 ) lengthOfZeroSeriesSections.emplace_back(cnt);
  }
  int res = S.size();
  for ( auto& lengthOfZeroSeriesSection : lengthOfZeroSeriesSections ) {
    res -= floor(lengthOfZeroSeriesSection / 2);
  }
  cout << res << endl;
  return 0;
}
