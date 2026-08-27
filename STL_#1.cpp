#include <bits/stdc++.h>
using namespace std;

 int main() {

  string str; 
  int sum;
  int n;
  cin >>n; 

  while (n--) {

  stack<char> opening;  
  sum = 0; 

  cin >> str; 

  for (auto c : str) {

  if (c == '(' || c== '[') {

  opening.push(c); 

  }

   else if (c == ')' && !opening.empty() && opening.top() == '(') { 

   sum++;     
   opening.pop(); 

   }

    else if ( c == ']' && !opening.empty() && opening.top() == '[')  { 

    sum++;     
   opening.pop(); 

  }
  }

  
  cout << sum << '\n'; 

 }
  
  return 0; 

}
