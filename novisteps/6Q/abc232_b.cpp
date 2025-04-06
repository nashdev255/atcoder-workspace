#include <iostream>
#include <string>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  const int N = S.size(), M = T.size();
  for ( int i = 0; i < 26; ++i ) {
    string substr(S);
    for ( int j = 0; j < S.size(); ++j ) substr[j] = (char)('a'+(int)(substr[j]+i)%26);
    if ( substr == T ) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
