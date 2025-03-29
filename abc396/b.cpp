#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
  int Q;
  cin >> Q;
  stack<int> st;
  for ( int i = 0; i < 100; i++ ) st.push(0);
  for ( int i = 0; i < Q; i++ ) {
    int q;
    cin >> q;
    if ( q == 1 ) {
      int x;
      cin >> x;
      st.push(x);
    }
    if ( q == 2 ) {
      cout << st.top() << endl;
      st.pop();
    }
  }
  return 0;
}
