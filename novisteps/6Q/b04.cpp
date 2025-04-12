#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

/*
* @param long long n 数
* @return vector<int> nの各桁が格納された数の列
*/
vector<int> getDigits(const long long n) {
  const string s(to_string(n));
  vector<int> digits;
  for ( int i = 0; i < s.size(); ++i ) digits.emplace_back(s[i]-'0');
  return digits;
}

int main() {
  int N;
  cin >> N;
  vector<int> digits(getDigits(N));
  reverse(digits.begin(), digits.end());
  int res = 0;
  rep(i,digits.size()) {
    if ( digits[i] == 1 ) res += (1<<i);
  }
  cout << res << endl;
  return 0;
}
