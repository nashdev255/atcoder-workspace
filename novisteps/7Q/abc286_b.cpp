#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  for ( int i = 0; i < N-1; ++i ) {
    if ( S.substr(i, 2) == "na" ) {
      S.insert(S.begin()+i+1, 'y');
      ++N;
    }
  }
  cout << S << endl;
  return 0;
}
