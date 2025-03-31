#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;
  for ( int i = 0; i < N; ++i ) {
    string s;
    cin >> s;
    if ( s == "For" ) ++sum;
  }
  cout << ( N/2 < sum ? "Yes" : "No" ) << endl;
  return 0;
}
