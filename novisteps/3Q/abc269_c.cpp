#include <iostream>
#include <vector>
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

int main() {
  ll N;
  cin >> N;
  vector<int> weights{};
  int s = 0;
  for ( ll bit = 1; bit <= N; bit<<=1 ) {
    if ( N & bit ) weights.emplace_back(s);
    ++s;
  }
  const int size = weights.size();
  for ( int bit = 0; bit < (1<<size); ++bit ) {
    ll sum = 0;
    for ( int i = 0; i < size; ++i ) {
      if ( bit & (1<<i) ) sum += powll(2, weights[i]);
    }
    cout << sum << endl;
  }
  return 0;
}
