 #include <bits/stdc++.h>
 using namespace std;

 int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, h, t;
  cin >> n >> m;

  multiset<int> ms; 

  // O(n log(n))

  while (n--) { 
  
  cin >> h; 
  ms.insert(h); 

 }

 // O(m log(n)) 

  while (m--) {  

  cin >> t;

  auto it = ms.lower_bound(t); // o(log n)

  if (it != ms.end()) {

  if (*it == t) {
    
  cout << t << '\n';
  ms.erase(it); // o(1)

  }

  else if (it == ms.begin()) {

    cout << -1 << '\n';

 }
       
 else  {

 --it; 
 cout << *it << '\n';  
 ms.erase(it);

 }
 } 
 
  else  {

  if (!ms.empty()) {

  auto i = prev(ms.end()); 
  cout << *i<< '\n'; 
  ms.erase(i);

 }

 else cout << -1 << '\n'; 
 
 }

  }

 //  O(n + m)log(n)

  return 0;

 } 
