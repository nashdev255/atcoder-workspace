#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  cout << S[0] << S.size() - 2 << S[S.size()-1] << endl;
  return 0;
}
