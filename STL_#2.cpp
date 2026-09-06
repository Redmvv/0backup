 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

   int n; 
   cin >> n;

  vector<pair<int , int>> v(n); 

  for (int i = 0; i < n; ++i) {

  cin >> v[i].second >> v[i].first;
  
  } 

   sort(v.begin(), v.end()); 
   
   auto w = v[0];  
   int sum = 1; 
  
   for (int i = 1; i < n; ++i) {

   if (w.first <= v[i].second) {

   sum++;
   w = v[i]; 

   }
   }

   cout << sum << '\n'; 

  return 0;

 } 
