#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;
  for ( int i = 0; i < N; ++i ) cout << S[i] << T[i];
  return 0;
}
