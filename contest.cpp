 #include <bits/stdc++.h>
 using namespace std;

  int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int n; 
  cin >> n;
  
  deque<pair<int, int>> dq(n); 
  vector<pair<int, int>> ans; 
  pair<int, int> c = {-1, -1};

  for (int i = 0; i < n; ++i) {

  cin >> dq[i].first >> dq[i].second; 

  }

  sort(dq.begin(), dq.end()); 

  c = dq[0]; 

  for (int i = 1; i < dq.size(); ++i) {

 int l = max(c.first, dq[i].first); 
 int r = min(c.second, dq[i].second); 

 if (l <= r)  {

 c.first = min(c.first, dq[i].first); 
 c.second = max(c.second, dq[i].second); 
 
 }

 else {

 ans.push_back(c); 
 c = dq[i]; 

 }
 }

 ans.push_back(c); 

 for (int i = 0;i < ans.size(); ++i)

 cout << ans[i].first << ' '  << ans[i].second << '\n'; 

 return 0; 


} 