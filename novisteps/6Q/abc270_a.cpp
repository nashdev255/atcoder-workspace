#include <iostream>
#include <string>
#include <vector>
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
    if ( N < 1 ) break;
  }
  reverse(binaryString.begin(), binaryString.end());
  return binaryString;
}

int main() {
  int A, B;
  cin >> A >> B;
  vector<bool> bsA(3, 0), bsB(3, 0);
  string tmp(getBinaryString(A));
  rep(i,tmp.size()) {
    bsA[bsA.size()-1-i] = (int)(tmp[tmp.size()-1-i]-'0');
  }
  string tmp2(getBinaryString(B));
  rep(i,tmp2.size()) {
    bsB[bsB.size()-1-i] = (int)(tmp2[tmp2.size()-1-i]-'0');
  }
  vector<bool> snuke(3, 0);
  rep(i,3) {
    snuke[i] = snuke[i] | bsA[i];
    snuke[i] = snuke[i] | bsB[i];
  }
  const int res = snuke[0]*4+snuke[1]*2+snuke[2]*1;
  cout << res << endl;
  return 0;
}
