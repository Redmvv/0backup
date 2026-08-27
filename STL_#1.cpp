 #include <bits/stdc++.h>
 using namespace std;

 int main() {
   
  int n, m;  
  cin >> n >> m;
  
  vector<int> a(n);
  vector<pair<int, int>> b(m);
  vector<int>ans(m);

  for (int i = 0; i < n; ++i)

  cin >> a[i]; 


  for (int i = 0; i < m; ++i) {

  cin >> b[i].first;
  b[i].second = i;  

 }

 sort(a.begin(), a.end());
 sort(b.begin(), b.end()); 


 int j = 0; 
 
 for (int i = 0; i < m; ++i) {

  while (a[j] <= b[i].first && j < n) {
  j++; 

 }

  ans[b[i].second] = j; 

 }


 for (int i = 0; i < m; ++i ) 

 cout << ans[i] << ' '; 


 return 0;

}