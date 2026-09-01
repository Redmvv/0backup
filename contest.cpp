 #include <bits/stdc++.h>
 using namespace std;

  int main() {

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int x, q, mod;  
  long long c;
  cin >> q;
  
  deque<pair<long long ,long long>> dq; 
 
 while (q--) {

 cin >> mod; 
 
 if (mod == 1)  {

 cin >> x >> c; 

  dq.push_back({x, c});  

 }

 else if (mod == 2 ) {

 cin >> c; 

  long long sum = 0; 
 long long  balls = 0; 

  while ( c > balls) {

  int remaining = c - balls;

 if (dq.front().second <= remaining) {

 sum += dq.front().first * dq.front().second;
 balls += dq.front().second; 
 dq.pop_front(); 

 }

 else {

 sum += dq.front().first * remaining; 
 balls += remaining; 
 dq.front().second -= remaining;

 }
 }

 cout << sum << '\n';

 } 
 } 

  
 return 0; 
 
  } 