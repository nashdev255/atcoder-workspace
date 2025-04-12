#include <iostream>
#include <bitset>
using namespace std;
using ll = long long;

int main() {
  ll a, b;
  cin >> a >> b;
  bitset<32> bsa(a), bsb(b);
  cout << (bsa&bsb) << endl;
  cout << (bsa|bsb) << endl;
  cout << (bsa^bsb) << endl;
  return 0;
}
