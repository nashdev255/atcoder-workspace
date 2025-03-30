#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  S.push_back(S[0]);
  S.erase(0, 1);
  cout << S << endl;
  return 0;
}
