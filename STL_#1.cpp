 #include <bits/stdc++.h>
 using namespace std;

 bool com(const pair<string, int> &a, const pair<string, int> &b) {

  return a.second == b.second ? a.first < b.first : a.second > b.second; 

 }

 int main() {
   
  int n;  
  cin >> n; 

  pair<string, int> friends[n]; 

  for (int i = 0 ;i < n; i++) {

  cin >> friends[i].first >> friends[i].second; 

 }

  sort(friends, friends+n ,com);

  
  for (int i = 0 ;i < n; i++) {

  cout << friends[i].first << ' '<< friends[i].second << '\n'; 

 }

 return 0;

}