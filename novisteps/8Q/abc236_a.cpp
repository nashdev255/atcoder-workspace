#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  int a, b;
  cin >> S >> a >> b;
  char tmp = S[a-1];
  S[a-1] = S[b-1];
  S[b-1] = tmp;
  cout << S << endl;
  return 0;
}
