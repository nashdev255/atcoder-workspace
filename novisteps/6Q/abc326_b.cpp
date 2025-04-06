#include <iostream>
#include <string>
#include <vector>
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
  for ( int i = N; i <= 919; ++i ) {
    vector<int> digits(getDigits(i));
    if ( digits[0]*digits[1] == digits[2] ) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
