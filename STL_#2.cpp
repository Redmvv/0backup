 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

 int n, m, k, x, b;
 int cnt = 0; 
 cin >> n >> m >> k; 

 vector<pair<int, int>> app(n); 
 map<pair<int, int>, bool> apart; 
 
 
  for (int i = 0; i < n; ++i) {

    cin >> x;

    int l = x - k; 
    int r = x + k; 
    app[i] = {l, r}; 

    } 


 while (m--) {

 cin >> b;
 
  int l = b - k; 
  int r = b + k; 
  apart[{l, r}]; 
 
 }

 
 
 for (auto [l, r] : app) {

    auto it = apart.find({l, r});

    if (it == apart.end()) continue;
    
    if(it->second) continue;

    else  {
    
    it->second = 1; 
    cnt++;
  }

 } 

 cout << "count = " << cnt << '\n'; 

 cout << "\n============\n";
  
  for (auto [i, j] : app) {

 cout << i << ' ' << j << '\n'; 

  }
  
  cout << "\n============\n";


  for (auto [i, j] : apart) {

 cout << i.first << ' ' << i.second << " --> " << j << '\n'; 

  }

  cout << apart.size() << '\n'; 


  return 0;


 } 
