#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  cout << ( S[N-1] == 'o' ? "Yes" : "No" ) << endl;
  return 0;
}
