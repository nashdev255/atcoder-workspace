#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
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
* @param string s 文字列
* @return bool 文字列が回文であるかどうか
*/
bool isPalindrome(const string& s) {
  const int n = s.size();
  bool res = true;
  for ( int i = 0; i < n/2; ++i ) {
    if ( s[i] != s[n-1-i] ) {
      res = false;
      break;
    }
  }
  return res;
}

/*
* @param string s 文字列
* @param string t sと等しい長さの文字列
* @return int 2つの文字列のハミング距離
*/
int getHammingDistance(const string& s, const string t) {
  if ( s.size() != t.size() ) return -1;
  const int n = s.size();
  int res = 0;
  for ( int i = 0; i < n; ++i ) {
    if ( s[i] != t[i] ) ++res;
  }
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
  return 0;
}
