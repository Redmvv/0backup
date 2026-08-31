 #include <bits/stdc++.h>
 using namespace std;

  int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int k; 
  string s;
  cin >> s >> k;

  sort(s.begin(), s.end()); 

  vector<string> per; 
  per.reserve(s.size()); 

 do {
   
  per.push_back(s); 

 } 

  while (next_permutation(s.begin(), s.end())); 

  cout << per[k-1]; 
  
 return 0; 


} 