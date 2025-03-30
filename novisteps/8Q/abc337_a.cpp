#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int xsum = 0, ysum = 0;
  for ( int i = 0; i < N; ++i ) {
    int x, y;
    cin >> x >> y;
    xsum += x;
    ysum += y;
  }
  if ( xsum < ysum ) {
    cout << "Aoki" << endl;
  } else if ( ysum < xsum ) {
    cout << "Takahashi" << endl;
  } else {
    cout << "Draw" << endl;
  }
  return 0;
}
