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

 int sum = 0; 
 string s; 
 cin >> s;

  for (char c : s )  {

  if (c == '(' || c == '[') 
  op.push(c);

 else if (c == ')') {

 if (!op.empty()) {

  if (op.front() == '(') {

  op.pop(); 
  sum++;

 }   

 else en.push(c); 

 }

 }
  

 else if (c == ']') {

 if (!op.empty()) {

  if (op.front() == '[')  
  op.pop(); 
  sum++;

 }
 
 else en.push(c); 

 }
 } 

 cout << sum << '\n'; 

 } 

 return 0; 
 
  } 
