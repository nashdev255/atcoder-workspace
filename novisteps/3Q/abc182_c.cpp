#include <iostream>
#include <vector>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;
using ll = long long;

/*
* @param int x 底
* @param int n 指数
* @return long long xのn乗
*/
long long powll(const int x, const int n) {
  long long res = 1;
  for ( int i = 0; i < n; ++i ) res *= x;
  return res;
}

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
  ll N;
  cin >> N;
  vector<int> digits(getDigits(N));
  int res = 100;
  for ( int bit = 1; bit < (1<<digits.size()); ++bit ) {
    ll sum = 0;
    int it = 0;
    rep(i,digits.size()) {
      if ( bit & (1<<i) ) {
        sum += digits[digits.size()-1-i]*powll(10, it);
        ++it;
      }
    }
    if ( sum%3 == 0 ) res = min(res, (int)digits.size()-it);
  }
  cout << ( res == 100 ? -1 : res ) << endl;
  return 0;
}
