#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;
using ll = long long;

int main() {
  int Q;
  cin >> Q;
  cin.ignore();
  vector<string> query(Q);
  deque<ll> chain{};
  vector<ll> presum(0);
  for ( auto& q : query ) getline(cin, q);
  for ( auto& q : query ) {
    if ( q[0] == '1' ) {
      const ll l = stoll(q.substr(2));
      chain.emplace_back(l);
    } else if ( q[0] == '2' ) {
      chain.pop_front();
    } else {
      const ll k = stoll(q.substr(2));
      ll coordinate = 0;
      for ( ll i = 0; i < k-1; i++ ) coordinate += chain[i];
      cout << coordinate << endl;
    }
  }
  return 0;
}
