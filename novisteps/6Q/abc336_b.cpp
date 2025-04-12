#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

/*
* @param long lnog n 10進数
* @return string nの2進数表記
*/
string getBinaryString(const long long n) {
  int N = n;
  string binaryString;
  for ( int i = 0; i < 64; ++i ) {
    if ( N%2 == 1 ) {
      N /= 2;
      binaryString.push_back('1');
    } else {
      N /= 2;
      binaryString.push_back('0');
    }
  }
  reverse(binaryString.begin(), binaryString.end());
  return binaryString;
}

int xtz(int X) {
  string binaryString(getBinaryString(X));
  reverse(binaryString.begin(), binaryString.end());
  int numberOfZeroBack = 0;
  rep(i,binaryString.size()) {
    if ( binaryString[i] == '0' ) ++numberOfZeroBack;
    else break;
  }
  return numberOfZeroBack;
}

int main() {
  int N;
  cin >> N;
  const int res = xtz(N);
  cout << res << endl;
  return 0;
}
