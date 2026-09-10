  #include <bits/stdc++.h>
  using namespace std;

  int main() { 

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, l, r, k; 
  cin >> n >> l >> r >> k;

  vector<long long> p(n+1);  
  

  for (int i = 1; i <= n; ++i) {

  cin >> p[i];  
  p[i] = p[i-1] + p[i];

  }

 int sub = p[r] - p[l-1]; 
 int diff = r - l ; 

 cout << (p[n] -  sub) +  (diff * k); 


 return 0;

 } 
