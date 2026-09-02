 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  map<string, int> mgs; 
  set<pair<int, string>> names; 
  string name; 

  cin >> n;
  
  for (int i = 1; i <= n; ++i) {

  cin >> name;

  mgs[name] = i; 
  
  }

  for (auto it = mgs.begin(); it != mgs.end(); ++it) {

  names.insert({it->second, it->first}); 

  }

  for (auto it = names.rbegin(); it != names.rend(); ++it) {

  cout << it->second << '\n';

 }

    return 0;
} 