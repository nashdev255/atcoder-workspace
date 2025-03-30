#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int cnt = 0;
  for ( int i = 0; i < N; ++i ) {
    int a;
    cin >> a;
    if ( 10 < a ) cnt += a - 10;
  }
  cout << cnt << endl;
  return 0;
}
