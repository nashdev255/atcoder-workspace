#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  cout << max(0, A-2*B) << endl;
  return 0;
}
