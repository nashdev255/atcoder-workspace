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
  int N, A, B;
  cin >> N >> A >> B;
  int res = 0;
  for ( int i = 1; i <= N; ++i ) {
    vector<int> digits(getDigits(i));
    int sum = 0;
    for ( auto& digit : digits ) sum += digit;
    if ( A <= sum && sum <= B ) res += i;
  }
  cout << res << endl;
  return 0;
}
