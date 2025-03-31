#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> D(N);
  for ( auto& d : D ) {
    int d_1, d_2;
    cin >> d_1 >> d_2;
    if ( d_1 == d_2 ) d = true;
    else d = false;
  }
  bool flg = false;
  for ( int i = 0; i < N-2; ++i ) {
    if ( D[i] && D[i+1] && D[i+2] ) {
      flg = true;
      break;
    }
  }
  cout << ( flg ? "Yes" : "No" ) << endl;
  return 0;
}
