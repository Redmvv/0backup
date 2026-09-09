  #include <bits/stdc++.h>
  using namespace std;

  int main() { 

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, q; 
 cin >> n >> q; 

  long long p[n+2] = {}; 
  
 for (int i = 1; i <= n; ++i) {

  cin >> p[i];

 }

  long long par[n+2] = {}; 

 while (q--) {

  long long l, r, val;  

 cin >> l >> r >> val;
 
 par[l] += val; 
 par[r + 1] -= val; 

 }


   
 for (int i = 1; i <= n; ++i) {

  par[i] += par[i - 1];

 }


 for (int i = 1; i <= n; ++i) {

  cout << p[i] + par[i] << ' ';

 }


 return 0; 


 } 
