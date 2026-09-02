 #include <bits/stdc++.h>
 using namespace std;

  int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
 int t; 
 cin >> t; 

 while (t--) {

 queue<char> op; 
 stack<char> en; 

 int round = 0, square = 0, ans = 0;
 string s; 
 cin >> s;

  for (char c : s )  {

  if (c == '(') 
  round++;
  
 if  ( c == '[') 
  square++;


 else if (c == ')' && round > 0) {

 round--; 
 ans++; 

 }

 else if (c == ']' && square > 0) {

 square--; 
 ans++; 

 }
 }

 cout << ans << '\n'; 

 }
  
 return 0; 
 
  }