#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int N = S.size();
  int cnt = 0;
  for ( int i = 0; i < N; i++ ) {
    for ( int j = i + 1; j < N; j++ ) {
      for ( int k = j + 1; k < N; k++ ) {
        if ( (S[i] == 'A' && S[j] == 'B' && S[k] == 'C' ) && ( j - i == k - j ) ) cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
