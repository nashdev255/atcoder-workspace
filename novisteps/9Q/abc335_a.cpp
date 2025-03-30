#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;
  S[S.size()-1] = '4';
  cout << S << endl;
  return 0;
}
