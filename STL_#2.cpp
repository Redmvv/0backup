 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

   int n, x; 
   cin >> n;

  multiset<int> t; 

  for (int i = 0; i < n; ++i) {

   cin >> x; 

   if (!t.empty())  {

  auto it = t.upper_bound(x);

  if (it != t.end()) { 

  t.erase(it);
  t.insert(x);

  }

  else t.insert(x); 

   }
   
 else t.insert(x); 

  } 


  cout << t.size(); 


  return 0;

 } 
