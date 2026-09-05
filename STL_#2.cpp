  #include <bits/stdc++.h>
  using namespace std;

  int main() {
 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t; 

  while (t--) {
  
  int n; 
  cin >> n;

  vector<int> s(n); 

  for (int i = 0; i < n; ++i)  {

 cin >> s[i]; 
 
 }

  if (n > 1 )  {
 
  int sum = 0, pair_sum = 0;  

  for (int i = 0; i < n; ++i) {

  for (int j = i+1; j < n; ++j) {

  if(s[i] != s[j])
  sum++; 

  else pair_sum++; 
 
 }
 }

 if (sum == 0) cout << 1 << '\n'; 

 else {
  
  cout << (pair_sum > 0 ? sum + 1 : sum) << '\n';
   
 } 
 }

 else if (n == 1) cout << 0 << '\n';

 }
 
  return 0;

 } 
