 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
     
 int64_t t; 
 cin >> t; 

 while (t--) {

 int64_t a, b, c, d; 

 cin >> a >> b >> c >> d;

 int64_t r = min(b, d); 
 int64_t l = max(a, c); 
 
 if ( l <= r) 

  cout <<  r - l  << '\n';

 else cout << 0 << '\n'; 

 } 
 
 return 0; 


} 