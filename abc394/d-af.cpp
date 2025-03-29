#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  string S;
  cin >> S;
  stack<char> st{};
  for ( auto& s : S ) {
    if ( ( s == '(' ) || ( s == '[' ) || ( s == '<' ) ) st.push(s);
    else {
      if ( st.empty() ) {
        cout << "No" << endl;
        return 0;
      }
      if (
        (( s == ')' ) && ( st.top() != '(' )) || 
        (( s == ']' ) && ( st.top() != '[' )) ||
        (( s == '>' ) && ( st.top() != '<' ))
      ) {
        cout << "No" << endl;
        return 0;
      }
      st.pop();
    }
  }
  cout << ( st.empty() ? "Yes" : "No" ) << endl;
  return 0;
}
