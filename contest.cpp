 #include <bits/stdc++.h>
 using namespace std;

  int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
 int t; 
 cin >> t; 

 while (t--) {

 stack<char> op; 
 stack<char> en; 

 int n; 
 char c; 
 cin >> n;

 while (n--)  {

 cin >> c; 

  if (c == '(') 
  op.push(c);

 else {
   
  if (!op.empty()) 
  op.pop();
  
 else en.push(c);

 }
 } 

 cout << op.size() << '\n'; 

 } 

 return 0; 
 
  } 
