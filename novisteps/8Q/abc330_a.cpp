#include <iostream>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  int cnt = 0;
  for ( int i = 0; i < N; ++i ) {
    int a;
    cin >> a;
    if ( L <= a ) ++cnt;
  }
  cout << cnt << endl;
  return 0;
}
