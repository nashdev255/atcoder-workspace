#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#define rep(i,n) for ( int i = 0; i < (n); ++i )
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> genuineParentheses{};
  rep(bit,(1<<N)) {
    string parentheses{};
    rep(i,N) {
      if ( bit & (1<<i) ) parentheses += '(';
      else parentheses += ')';
    }
    stack<char> st{};
    rep(i,N) {
      if ( parentheses[i] == '(' ) st.push('(');
      else if ( parentheses[i] == ')' && !st.empty() && st.top() == '(' ) st.pop();
      else if ( parentheses[i] == ')' ) st.push(')');
    }
    const bool isGenuine = st.empty();
    if ( isGenuine ) genuineParentheses.emplace_back(parentheses);
  }
  sort(genuineParentheses.begin(), genuineParentheses.end());
  for ( auto& parentheses : genuineParentheses ) cout << parentheses << endl;
  return 0;
}
