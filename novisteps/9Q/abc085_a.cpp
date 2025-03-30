#include <iostream>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  S.replace(0, 4, "2018");
  cout << S << endl;
  return 0;
}
