  #include <bits/stdc++.h>
  using namespace std;

 long long fix(int x, int mod) {

  return ((x % mod) + mod) % mod; 

 }

  int main() { 

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

 int n; 
 cin >> n; 

 long long p[n+1] = {}; 

  for (int i = 1; i <= n; ++i) {

  cin >> p[i]; 
  p[i] += p[i - 1]; 
  p[i] = fix(p[i], n); 
 

 }


 
  for (int i = 1; i <= n; ++i) {

 cout << p[i] << ' '; 

  }

  
  map<long long, long long> mp;
 
 long long ans = 0; 

 for (int i = 0; i <= n; ++i) {

  ans += mp[p[i]]; 
  mp[p[i]]++;


 }


 cout << ans; 


 return 0; 


 } 
