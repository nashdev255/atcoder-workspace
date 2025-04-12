#include <iostream>
#include <bitset>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  bitset<32> bs(N);
  cout << bs << endl;
  cout << (~bs) << endl;
  cout << (bs<<1) << endl;
  cout << (bs>>1) << endl;
  return 0;
}
