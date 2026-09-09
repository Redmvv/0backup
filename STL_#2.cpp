  #include <bits/stdc++.h>
  using namespace std;


  int main() { 

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

 int n, x; 
 cin >> n >> x; 

 long long p[n+1] = {}; 


  for (int i = 1; i <= n; ++i) {

  cin >> p[i]; 
  p[i] += p[i - 1]; 
  
 }

  long long ans = 0; 

  map<long long, long long> m; 

  for (int i = 0; i <= n; ++i) {

  long long wanted = p[i] - x; 
 
  ans += m[wanted]; 
  m[p[i]]++;
 
  }
    
 cout << ans; 
  


 return 0; 


 } 